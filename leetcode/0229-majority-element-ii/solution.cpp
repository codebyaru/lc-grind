class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>ct;
      vector <int>ans;
        for (int i=0;i<nums.size();i++)
        {
            ct[nums[i]]++;
        }
        for (auto &p :ct)
        {
            if(p.second>nums.size()/3)
            ans.push_back(p.first);
        }
        return ans;
    }
};
