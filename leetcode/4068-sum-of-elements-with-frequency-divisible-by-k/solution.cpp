class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp1;
        for (int i=0; i<nums.size();i++)
        {
            mp1[nums[i]]++;
        }
        int sum=0; 
        for (auto &it : mp1)
        {
            if (it.second %k==0)
            {
                sum = sum+ (it.first*it.second);
            }
        }
        return sum;
    }
};
