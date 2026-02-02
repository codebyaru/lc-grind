class Solution {
public:
    string reverseByType(string s) {
        vector<char> c, sym;
        for (char x : s) {
            if (x >= 'a' && x <= 'z')
                c.push_back(x);
            else
                sym.push_back(x);
        }
        reverse(c.begin(), c.end());
        reverse(sym.begin(), sym.end());
        int i = 0;
        int j = 0;
        for (char& x : s) // tochange in s
        {
            if (x >= 'a' && x <= 'z')
                x = c[i++];
            else
                x = sym[j++];
        }
        return s;
    }
};
