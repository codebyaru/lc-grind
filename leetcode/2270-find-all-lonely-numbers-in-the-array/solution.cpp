class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int x:nums) mp[x]++;
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            if(mp[temp]==1&&mp[temp+1]==0&&mp[temp-1]==0) ans.push_back(temp);
            //mp[temp] is checking it.second anf tmep is it.first
        }
        return ans;
    }
};
