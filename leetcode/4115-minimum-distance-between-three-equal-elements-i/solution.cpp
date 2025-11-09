class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int, vector<int>> mpp;
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]].push_back(i);
            auto& v = mpp[nums[i]];
            if (v.size() >= 3) {
                int n = v.size();
                int d = abs(v[n - 1] - v[n - 2]) + abs(v[n - 2] - v[n - 3]) +
                        abs(v[n - 3] - v[n - 1]);
                ans = min(d, ans);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};
