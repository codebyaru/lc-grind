class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        sort(strs.begin(), strs.end());
        string ans = "";
        string first = strs[0];
        string last = strs[strs.size() - 1];
        int min_len = min(first.size(), last.size());

        for (int i = 0; i < min_len; i++) {
            if (first[i] != last[i]) 
                break;
                else ans = ans + first[i];
            
        }
        return ans;
    }
};
