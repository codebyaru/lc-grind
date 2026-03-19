class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        vector<vector<int>> prefX(n + 1, vector<int>(m + 1, 0));
        vector<vector<int>> prefY(n + 1, vector<int>(m + 1, 0));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int isX = (grid[i][j] == 'X') ? 1 : 0;
                int isY = (grid[i][j] == 'Y') ? 1 : 0;
                
                prefX[i + 1][j + 1] = isX + prefX[i][j + 1] + prefX[i + 1][j] - prefX[i][j];
                prefY[i + 1][j + 1] = isY + prefY[i][j + 1] + prefY[i + 1][j] - prefY[i][j];
                if (prefX[i + 1][j + 1] == prefY[i + 1][j + 1] && prefX[i + 1][j + 1] > 0) {
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
