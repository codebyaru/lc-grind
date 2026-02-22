class Solution {
public:
    int getFactorial(int digit) {
        if (digit == 0) return 1;
        int res = 1;
        for (int i = 2; i <= digit; i++) res *= i;
        return res;
    }

    bool isDigitorialPermutation(int n) {
        vector<int> originalDigits;
        long long sumFactorials = 0;
        int temp = n;
        while (temp > 0) {
            int d = temp % 10;
            sumFactorials += getFactorial(d);
            originalDigits.push_back(d);
            temp /= 10;
        }

        // Convert the resulting sum to string for digit comparison
        string s = to_string(sumFactorials);
        
        // Check leading zero rule and length mismatch
        if (s[0] == '0' || s.length() != originalDigits.size()) 
            return false;

        vector<int> sumDigits;
        for (char c : s) sumDigits.push_back(c - '0');

        // Sort both collections to check if they are permutations
        sort(originalDigits.begin(), originalDigits.end());
        sort(sumDigits.begin(), sumDigits.end());

        return originalDigits == sumDigits;
    }
};
