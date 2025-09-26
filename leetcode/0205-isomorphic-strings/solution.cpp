class Solution {
public:
    bool isIsomorphic(string s, string t) {
    if (s.size() != t.size()) return false;

    int mapS[256] = {0}, mapT[256] = {0};

    for (int i = 0; i < s.size(); i++) {
        if (mapS[s[i]] != mapT[t[i]]) return false;

        // +1 because 0 means “not set” yet
        mapS[s[i]] = i + 1;
        mapT[t[i]] = i + 1;
    }

    return true;
}

};
