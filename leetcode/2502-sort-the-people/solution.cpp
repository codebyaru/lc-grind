class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        unordered_map<int, int> mpp(n);
        for(int i = 0; i < n; i++) {
            mpp[heights[i]] = i;
        }
sort(heights.begin(), heights.end(), greater<int>());
        vector<string> ans(n);
        for(int i = 0; i < n; i++) {
            ans[i] = names[mpp[heights[i]]];
        }
        return ans;
    }
};
