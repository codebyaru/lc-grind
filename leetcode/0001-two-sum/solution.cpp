class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        // pass 1: store value → index
        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]] = i;

        // pass 2: check partner
        for(int i = 0; i < nums.size(); i++){
            int need = target - nums[i];
            if(mp.count(need) && mp[need] != i)
                return {i, mp[need]};
        }
        return {};
    }
};

