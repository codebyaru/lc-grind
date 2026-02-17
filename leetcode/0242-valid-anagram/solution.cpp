class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        return s == (sort(t.begin(), t.end()), t);
    }
};

