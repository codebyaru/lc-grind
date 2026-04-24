class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0; int r =0; int dash=0;
        for(char x:moves){
            if(x=='L') l++;
             if(x=='R') r++;
             if (x=='_'){
                dash++;
            }
        }
        if(l>r) l+=dash; else r+=dash;
        return abs(l-r);
    }
};
