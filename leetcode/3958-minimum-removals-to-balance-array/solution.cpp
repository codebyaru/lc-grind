class Solution {
public:
    int minRemoval(vector<int>& nums, long long k) {
      int n=nums.size();
      sort(nums.begin(),nums.end());
      long long left =0; long long maxi=0;
      for (int right=0;right<n;right++){
        if(nums[right]>k*nums[left]) left++;
        maxi=max(maxi,right-left+1);
      }  
      return n-maxi;
    }
};
