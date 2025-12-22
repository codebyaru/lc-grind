
      class Solution {
public:
int count(vector<int>&nums,int maxsum)
{
    int parts=1; long long sum=0;
    for (int x:nums){
        if(sum+x<=maxsum) sum +=x;
        else {
            parts++;
            sum=x;
        }
    }
    return parts;
}
    int splitArray(vector<int>& nums, int k) {
       int low = *max_element(nums.begin(),nums.end());
       int high = accumulate(nums.begin(),nums.end(),0);
       while(low<=high){
        int mid = (low+high)/2;
        if(count(nums,mid)>k)
        low = mid+1;
        else high = mid-1;
       } 
       return low;
    }
};
