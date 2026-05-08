class Solution {
public:
    int countsetbit(long long n){
        int count=0;
        while(n>0){
            count+=(n&1);
            n>>=1;
        }
        return count;
    }
    int makeTheIntegerZero(int num1, int num2) {
        for(int k=1;k<=60;k++){
            long long target = (long long)num1 - (long long)k*num2;
            if(target<k) continue;
            if(countsetbit(target)<=k) return k;
        }
        return -1;
    }
};
