class Solution {
public:
    int countOdds(int low, int high) {
     return ((high+1)/2-low/2);
     //1 se high tak odd check kre and 1 se low tak, then we subtract both :)
    }
};
