class Solution {
public:
long long mod = 1E9+7;
long long power(long long base, long long exp){
    if(exp==0) return 1;
    long long half = power(base,exp/2);
    half = (half * half)%mod;
    if(exp&1) return (half*base)%mod;
    return half;
}
    int countGoodNumbers(long long n) {
        long long evenpos=(n+1)/2;
        long long oddpos=n/2;
        long long a=power(5,evenpos);
        long long b=power(4,oddpos);
        return (a*b)%mod;
    }
};
