class Solution {
public:
    string largestEven(string s) {
        int last2 = -1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '2') last2 = i;
        }

        if (last2 == -1) return "";
        return s.substr(0, last2 + 1);
 
    }
};
