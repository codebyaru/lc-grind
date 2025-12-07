class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long result = 0;
        while (i < s.size() && s[i] == ' ')
            i++;
        if (i == s.size())
            return 0;
        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+')
            i++;

        // converting chars to string
        while (i<s.size() && isdigit(s[i]))
        {
            result = result*10+ (s[i]-'0');
            if(sign*result > INT_MAX) return INT_MAX;
            else if (sign*result < INT_MIN) return INT_MIN;
            i++;
        }
        return (int)(sign*result);
    }
};
