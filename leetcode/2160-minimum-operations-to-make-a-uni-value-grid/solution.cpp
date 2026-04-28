class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>v; 
        int row = grid.size(), col = grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                v.push_back(grid[i][j]);
            }
        }

        sort(v.begin(),v.end());
        int median = v[v.size()/2];
        // int val =-1;
        // for(int i=0;i<v.size();i++){
        //     val = v[median];
        // }
        int ops =0; 
        for(int num:v){
            int diff = abs(median-num);
            if(diff%x!=0) return -1; // to check for those that cant make to the element given in matrix 
            ops+=diff/x;
        }
        return ops;
    }
};
