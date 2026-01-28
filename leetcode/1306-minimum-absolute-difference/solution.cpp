class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int  diff = INT_MAX;
        vector<vector<int>>ans;
        sort(arr.begin(), arr.end());
        for (int i=1;i<arr.size();i++){
            diff = min(diff, arr[i]-arr[i-1]);
        }
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] == diff) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }
        return ans;

    }
};
