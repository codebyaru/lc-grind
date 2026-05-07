class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int row = box.size(); int col = box[0].size();
        for (int i=0;i<row;i++){
            int lowest = col-1;
            for(int j=col-1;j>=0;j--){
                if(box[i][j]=='*')
                lowest = j-1; //how??
                else if (box[i][j]=='#') 
                {swap(box[i][j],box[i][lowest]);
                lowest--;}
            }
        }
        vector<vector<char>> rotatedBox(col, vector<char>(row));
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                rotatedBox[j][row - 1 - i] = box[i][j];
            }
        }
        
        return rotatedBox;
    }
};
