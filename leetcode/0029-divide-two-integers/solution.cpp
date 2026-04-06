class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) return 1;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        bool sign = (dividend > 0) == (divisor > 0);

        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        long long quotient = 0;

        while (n >= d) {
            int cnt = 0;
            while (n >= (d << (cnt + 1))) { // D * 2^(COUNT+1)
                cnt++;
            }
            quotient += (1LL << cnt); // 2 POWER COUNT
            n -= (d << cnt);
        }

        if (quotient > INT_MAX)
            return sign ? INT_MAX : INT_MIN;

        return sign ? quotient : -quotient;
    }
};
