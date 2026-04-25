class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum=0;
       for (int i=0;i<nums.size();i++){
        int s = nums[i], l = nums[i];
        for (int j=i;j<nums.size();j++){
           // int range = max(nums[i],nums[j]) - min(nums[i],nums[j]);
           s = min(s,nums[j]);
           l = max(l,nums[j]);
           sum+=(l-s); 
        }
       } 
       return sum;
    }
};
