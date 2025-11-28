class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int depth = 0;
        for (char ch : s) {
            if (ch == '(') {
                if (depth > 0)
                    ans = ans + ch;
                depth++;
            }
            else if (ch == ')')
            {
                depth --;
                if (depth>0) ans = ans +ch;
            }
        }
        return ans;
    }
    };
