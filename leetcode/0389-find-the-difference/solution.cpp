class Solution {
public:
    char findTheDifference(string s, string t) {
        char x1=0, x2=0;
        for (int i=0;i<s.size();i++) x1^=s[i];
        for (int i=0;i<t.size();i++) x2^=t[i];
        return x1^x2;
        
    }
};
