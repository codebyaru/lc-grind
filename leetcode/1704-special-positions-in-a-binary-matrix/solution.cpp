class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rows = mat.size();
        int col = mat[0].size();
        int ct=0;
        for (int i=0;i<rows;i++){
            for (int j=0;j<col;j++){
                if(mat[i][j]==1){
                    bool rc=true;
                    bool cc=true;

                    for (int k=0;k<col;k++){
                        if(k!=j && mat[i][k]==1){
                            rc=false;
                            break;
                        }
                    }

                    for (int k=0;k<rows;k++){
                        if(k!=i && mat[k][j]==1){
                            cc=false;
                            break;
                        }
                    }
                    if(rc && cc)
                    ct++;
                }
            }
        }
        return ct;
    }
};
