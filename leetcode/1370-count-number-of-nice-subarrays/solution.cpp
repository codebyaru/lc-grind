class Solution {
public:
    int most(vector<int>& nums, int k) {
        int l=0, sum=0, count=0;
        for (int r=0;r<nums.size();r++){
            sum+=nums[r]%2; //converting to binary
            while(sum>k){
                sum-=nums[l]%2;
                l++;
            }
            count+=r-l+1;
        }
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return most(nums,k)-most(nums,k-1);
    }
};
