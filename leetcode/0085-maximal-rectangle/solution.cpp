class Solution {
public:
    int calcarea(vector<int>histo){
        int n = histo.size();
        stack<int>st;
        int maxi=0;
        for (int i=0;i<=n;i++){
            while(!st.empty() && (i==n || histo[st.top()]>=histo[i])){
                int h = histo[st.top()];
                st.pop();
                int width ;
                if (st.empty()) width =i;
                else width = i-1-st.top();
                maxi = max(maxi, h*width);
            }
            st.push(i);
        }
        return maxi;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size(); int col = matrix[0].size();
        int maxa=0;
        vector<int>h(col,0);
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                if(matrix[i][j]=='1') h[j]++; //char vector given LOL :)
                else h[j]=0;
            }
            int area = calcarea(h);
            maxa=max(maxa,area);
        }
        return maxa;
    }
};
