class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> lonely;
        for (auto it : nums)
            lonely[it]++;
        for (pair<int, int> it : lonely) {
            int x = it.first;
            int y = it.second;
            if (y == 1 && lonely.count(x + 1) == 0 && lonely.count(x - 1) == 0)
                ans.push_back(x);
        }
        return ans;
    }
};
