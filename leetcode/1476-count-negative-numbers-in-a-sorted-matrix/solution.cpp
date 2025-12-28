class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
      int r = grid.size(); int c = grid[0].size();
      int count = 0;
      for(int i=0;i<r;i++){
        int low =0; int high = c-1;
        while(low<=high){
            int mid= (low+high)/2;
            if(mid<0) count++;
            if(grid[i][mid]<0) high = mid-1;
            else 
            low = mid+1;
        }
        count = count+(c-low);
      }
      return count;
    }
};
