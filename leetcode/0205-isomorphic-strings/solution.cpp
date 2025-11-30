class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        // compare the indices of the character
        // mpp1 check karta hai ki s ka har character sirf ek fixed character t
        // me map ho.
        // mpp2 ensure karta hai ki t ka koi character do-do characters se map
        // na ho.
        unordered_map<char, char> mpp1;
        unordered_map<char, bool> mpp2;
        for (int i = 0; i < s.length(); i++) {
            if (mpp1.count(s[i])) {
                if (mpp1[s[i]] != t[i])
                    return false;
            } else {
                if (mpp2[t[i]])
                    return false;
                mpp1[s[i]] = t[i];
                mpp2[t[i]] = true;
            }
        }
        return true;
    }
};
