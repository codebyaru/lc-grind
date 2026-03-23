class Solution {
public:
    string processStr(string s) {
        string res;
        res.reserve(2 * s.size());  // reduce reallocations

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z') {
                res.push_back(ch);
            }
            else if (ch == '*') {
                if (!res.empty()) res.pop_back();
            }
            else if (ch == '#') {
                res.append(res);   // faster than +=
            }
            else { // '%'
                reverse(res.begin(), res.end());
            }
        }
        return res;
    }
};
