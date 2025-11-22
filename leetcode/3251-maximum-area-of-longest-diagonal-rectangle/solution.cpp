class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long bestdiag=-1;
        int bestarea=0;
        for(int i=0;i<dimensions.size();i++)
        {
                long long diag=dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1];
                    int area = dimensions[i][0]*dimensions[i][1];
                if(diag>bestdiag)
                {
                    bestdiag=diag;
                    bestarea=area;
                }
                else if (diag==bestdiag && area>bestarea)
                bestarea = area;
        }
        return bestarea;
    }
};
