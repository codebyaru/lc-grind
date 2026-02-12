class Solution {
public:
    int longestBalanced(string s) {
        int len = 0;
        for (int start = 0; start < s.size(); start++) {
            unordered_map<char, int> freq;
            for (int i = start; i < s.size(); i++) {
                freq[s[i]]++;
                int val = freq.begin()->second;
                bool same = true;
                for (auto it : freq) {
                    if (it.second != val) {
                        same = false;
                        break;
                    }
                }
                if (same)
                    len = max(len, i - start + 1);
            }
        }
        return len;
    }
};
