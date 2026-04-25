class Solution {
public:
    bool validDigit(int n, int x) {
        int last =-1; int c=0;
        while(n>0){
            int digit = n%10;
            last = digit;
            n=n/10;
            if(digit ==x) c++;
        }
            if (last ==x) return false;
        else if (c<=0) return false;
        else return true;
    }
};
