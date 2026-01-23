class Solution {
public:
void findcombi(int i, int target, vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds){
    if(i==arr.size()){
        //elements mil gye cuz target = 0
        if(target==0) ans.push_back(ds);
        return;
    }
    //picking the element
    if(arr[i]<=target){
        ds.push_back(arr[i]);
        findcombi(i, target-arr[i],arr, ans, ds);
        ds.pop_back();
    }
    findcombi(i+1, target, arr,ans,ds);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>>ans;
       vector<int>ds;
       findcombi(0,target, candidates, ans,ds);
       return ans; 
    }
};
