class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector <int> v;
        int cursum=0;
        for (int i=0;i<nums.size();i++)
        {
            cursum=cursum+nums[i];
            v.push_back(cursum);
            if (cursum<0) cursum =0;
        }
        return *max_element(v.begin(),v.end());
    }
};
