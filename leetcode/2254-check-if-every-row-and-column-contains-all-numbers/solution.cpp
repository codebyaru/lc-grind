class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
    for(int i=0;i<n;i++){
        unordered_set<int> row, col;
        for(int j=0;j<n;j++){
            // check row
            if(row.count(matrix[i][j])) return false;
            row.insert(matrix[i][j]);

            // check column
            if(col.count(matrix[j][i])) return false;
            col.insert(matrix[j][i]);
        }
    }

    return true;
}
};
