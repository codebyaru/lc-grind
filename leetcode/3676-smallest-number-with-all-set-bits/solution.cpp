class Solution {
public:
    int smallestNumber(int n) {
        int x=1; 
        while(x<n){
            x = (x << 1) | 1; //making last but 0 and then adding 1 at that place to make all 1s 
        }
        return x;
    }
};
