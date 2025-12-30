class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
     int row = grid.size(); int col = grid[0].size(); int ans=0;
     for (int i=0;i+2<row;i++){
        for (int j=0;j+2<col;j++){
            if(grid[i+1][j+1]!=5) continue;

            int a[9]; int k=0;
            for (int r=0; r<3;r++){
                for (int c=0; c<3;c++){
                    a[k++]=grid[i+r][j+c];
                }
            }
            //checking for distinct 1-9
            int freq[10]={0}; 
            for(int x:a) if(x<1 || x>9 || freq[x]++) goto skip;
            //now checking magic sums
            if((a[0]+a[1]+a[2]==15) && (a[3]+a[4]+a[5]==15) && (a[6]+a[7]+a[8]==15) && 
                   (a[0]+a[3]+a[6]==15) && (a[1]+a[4]+a[7]==15) && (a[2]+a[5]+a[8]==15) &&
                   (a[0]+a[4]+a[8]==15) && (a[2]+a[4]+a[6]==15))
                   ans ++;
                   skip:;
        }
     } 
     return ans;  
    }
};
