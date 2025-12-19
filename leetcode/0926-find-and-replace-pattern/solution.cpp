class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words,
                                         string pattern) {
        vector<string> ans;
        for (string w : words)
            if (match(w, pattern))
                ans.push_back(w);
        return ans;
    }
    bool match(string w, string p) {
        unordered_map<char, int> mp1, mp2;
        for (int i = 0; i < w.size(); i++) {
            if (!mp1.count(p[i]))
                mp1[p[i]] = i;
            if (!mp2.count(w[i]))
                mp2[w[i]] = i;

            if (mp1[p[i]] != mp2[w[i]])
                return false;
        }
        return true;
    }
};
