class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
       int cx=center[0]; int cy=center[1];
        int best=-1;
        vector<int>ans={-1,-1};
        for (int i=0;i<towers.size();i++){
            int x=towers[i][0];
            int y=towers[i][1];
            int q=towers[i][2];
            int dist = abs(x-cx)+abs(y-cy);
            if(dist>radius) continue;

            if(q>best){
                best = q;
                ans = {x,y};
            }
            else if (q==best){
                if(x<ans[0] || (x==ans[0] && y<ans[1])){
                    ans = {x,y};
                }
            }
        }
        return ans;
    }
};
