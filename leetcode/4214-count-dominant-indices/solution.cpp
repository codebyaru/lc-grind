class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int count=0; int n=nums.size();
        for(int i = 0; i < n-1; i++)
{
    double avg = accumulate(nums.begin()+i+1, nums.end(), 0.0) / (n-i-1);

    if(nums[i] > avg)
        count++;
}
return count;
    }
};
