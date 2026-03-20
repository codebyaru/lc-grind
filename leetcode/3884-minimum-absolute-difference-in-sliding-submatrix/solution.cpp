class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int n=grid.size(); int m = grid[0].size();
        vector<vector<int>>ans(n-k+1,vector<int>(m-k+1));
        for(int i=0;i<=n-k;i++){
            for (int j=0;j<=m-k;j++){
                vector<int>v;
                //kXk ka mtrix bna rhe h
                for (int x=i;x<i+k;x++){
                    for (int y=j;y<j+k;y++){
                        v.push_back(grid[x][y]);
                    }
                }
                sort(v.begin(),v.end());
                int mini = INT_MAX;
                for (int p=1;p<v.size();p++){
                    if(v[p]!=v[p-1])
                    mini = min(mini, abs(v[p]-v[p-1]) );
                }
                ans[i][j]=(mini ==INT_MAX? 0 : mini);
            }
        }
        return ans;
    }
};
