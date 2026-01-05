class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        long long sum = 0;
        int neg = 0;
        int mini = INT_MAX;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                sum += abs(matrix[i][j]);
                if (matrix[i][j] < 0)
                    neg++;
                mini = min(mini, abs(matrix[i][j]));
            }
        }
        if (neg % 2 != 0) {
            sum = sum - mini-mini;
        }
        return sum;
    }
};
