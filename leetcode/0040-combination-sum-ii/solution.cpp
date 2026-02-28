class Solution {
public:
    void solve(int ind, int target, vector<int>& arr,
               vector<int>& ds, vector<vector<int>>& ans) {
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        unordered_set<int> used;   // prevent duplicates at this level
        for(int i = ind; i < arr.size(); i++){
            if(arr[i] > target) continue;   // optional prune
            if(used.count(arr[i])) continue; // skip duplicate branch
            used.insert(arr[i]);
            ds.push_back(arr[i]);
            solve(i+1, target-arr[i], arr, ds, ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); 
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0, target, candidates, ds, ans);
        return ans;
    }
};
