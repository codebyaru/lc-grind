class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int ans=0; 
        for (int i=0; i<nums.size();i++){
            auto odd = unordered_map<int,int>();
            auto even = unordered_map<int,int>();
           for (int j=i;j<nums.size();j++){
            if(!(nums[j]&1)) even[nums[j]]++;
            else odd[nums[j]]++;
           if(odd.size()==even.size())
            ans = max(ans, j-i+1);
           }
        }
        return ans;
    }
};
