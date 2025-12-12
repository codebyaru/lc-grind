class Solution {
public:
    bool isPalindrome(int x) {
        // neg number cant be a palindrome
        // num ending with zero cant be a palindrome
        if (x < 0)
            return false;
        long long rev = 0;
        long long num = x;

        while (num != 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }

        return rev == x;
    }
};
