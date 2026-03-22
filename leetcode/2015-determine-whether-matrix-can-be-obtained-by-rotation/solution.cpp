class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int m = mat.size(); int n = mat[0].size();
        int k = 0;
        while (k < 4) {
            if (mat == target) return true;
            for (int i = 0; i < m; i++) {
                for (int j = i + 1; j < n; j++) {
                    swap(mat[i][j], mat[j][i]);
                }
            }
            reverse(mat.begin(), mat.end());
            k++;
        }
        return false;
    }
};
