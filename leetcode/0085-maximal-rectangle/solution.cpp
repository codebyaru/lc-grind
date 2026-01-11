class Solution {
public:
    int area(vector<int>&heights){
        int n= heights.size();
        stack<int>s;
        int maxiarea=0;
        for (int i=0;i<=n;i++){
            int h=(i==n)?0:heights[i];
            while(!s.empty()&&h<heights[s.top()]){
                int height=heights[s.top()];
                s.pop();
                int width=s.empty()?i:i-s.top()-1;
                maxiarea=max(maxiarea,height*width);
            }
            s.push(i);
        }
        return maxiarea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows=matrix.size();
        if(rows==0) return 0;
        int cols = matrix[0].size();
        vector<vector<int>>height(rows,vector<int>(cols,0));
        for (int i=0;i<rows;i++){
            for (int j=0;j<cols;++j){
                if(matrix[i][j]=='1'){
                    height[i][j]=(i==0?0:height[i-1][j])+1;
                }
                else{
                    height[i][j]=0;
                }
                }
            }
            int maxiarea=0;
            for (int i=0;i<rows;i++){
                maxiarea=max(maxiarea,area(height[i]));
            }
            return maxiarea;
        
    }
};
