class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // 9 rows, 9 columns, 9 boxes
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        int boxes[9][9] = {0};
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
              if (board[i][j] == '.')
                    continue;
                
                int num = board[i][j] - '1'; 
                // '1' becomes 0, '9' becomes 8
                
                int boxIndex = (i / 3) * 3 + (j / 3);
                
                // If already seen → invalid
                if (rows[i][num] || cols[j][num] || boxes[boxIndex][num])
                    return false;
                
                // Mark as seen
                rows[i][num] = 1;
                cols[j][num] = 1;
                boxes[boxIndex][num] = 1;
            }
        }
        
        return true;
    }
};
