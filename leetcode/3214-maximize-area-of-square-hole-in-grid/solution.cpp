class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        int cnt=1; int hmaxi=1;
        for (int i=1;i<hBars.size();i++){
            if(hBars[i]==hBars[i-1]+1) cnt++; 
            else cnt=1;
         hmaxi=max(hmaxi, cnt); 
        }

        int vmaxi=1;  cnt=1; 
        for (int j=1;j<vBars.size();j++){
            if(vBars[j]==vBars[j-1]+1) cnt++;
            else cnt=1; 
            vmaxi = max(vmaxi, cnt);
        }
        int side = min(vmaxi+1, hmaxi+1);
        return side*side; 
    }
};
