class Solution {
public:
void helper(int k, int n,int start,  vector<int>&ds, vector<vector<int>>&res){
    //make sure to pass by reference 
    if(k==0 && n==0) {
        res.push_back(ds); return;
    }
    if(k==0 || n<0) return ; //skip this

    for (int i=start; i<=9; ++i){
        ds.push_back(i);
        helper(k-1, n-i, i+1, ds, res);
        ds.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>res;
        vector<int>ds;
        helper(k, n, 1,ds, res);
        return res;
    }
};
