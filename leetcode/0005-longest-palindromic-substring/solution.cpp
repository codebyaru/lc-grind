class Solution {
public:
    int expand(const string& s, int left, int right) {
        // Expand while characters match and within bounds
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        // Return the length of the palindrome
        return right - left - 1;
    }
    string longestPalindrome(string s) {
        int start = 0, end = 0;
        for (int center = 0; center < s.size(); center++) {
            int lenodd = expand(s, center, center);
            int leneven = expand(s, center, center + 1);
            int maxlen = max(lenodd, leneven);

            if (maxlen > end - start) {
                start = center - (maxlen - 1) / 2;
                end = center + maxlen / 2;
            }
        }
        return s.substr(start, end - start + 1);
    }
};
