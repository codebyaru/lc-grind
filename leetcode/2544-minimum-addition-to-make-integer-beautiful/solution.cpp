class Solution {
public:
    long long digitsum(long long n){
        long long sum=0;
        while(n>0){
            sum+=n%10; n=n/10;
        }
        return sum;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        long long x=0, base = 1; 
        while(digitsum(n+x)>target){
            long long digit = (n+x)/base % 10;
            long long add = (10-digit)%10;
            x+=add*base;
            base*=10;
        }
        return x;
    }
};
