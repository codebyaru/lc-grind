class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>c;
        int ans = 0; int i=0;
        for (int j=0;j<s.size();j++)
        {
            while (c.count(s[j]))
            {
                c.erase(s[i]);
                i++;
            }
            c.insert(s[j]);
            ans = max(ans, j-i+1);
        }
        return ans;
    }
};
