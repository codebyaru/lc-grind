class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        int sum=0;
        long long p=1;
        while(n>0)
            {
                int d =n%10;
                if(d!=0)
                {
                    sum=sum+d;
                    x=d*p+x;
                    p=p*10;
                }
                n=n/10;
            }
        return x*sum;
    }
};
