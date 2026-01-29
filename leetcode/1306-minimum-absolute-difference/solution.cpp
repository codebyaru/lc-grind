class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int minDiff = arr[1] - arr[0];
        vector<vector<int>> ans;

        for(int i = 1; i < arr.size(); i++) {
            int diff = arr[i] - arr[i-1];

            if(diff < minDiff) {
                minDiff = diff;
                ans.clear();
                ans.push_back({arr[i-1], arr[i]});
            }
            else if(diff == minDiff) {
                ans.push_back({arr[i-1], arr[i]});
            }
        }
        return ans;
    }
};

