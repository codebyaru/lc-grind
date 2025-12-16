class Solution {
public:
    string reverseWords(string s) {
        vector<string> w;
        string temp = "";
        // split words into array elements
        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                w.push_back(temp);
                temp = "";
            } else
                temp += s[i];
        }
        int target = 0; // count vowels
        for (char c : w[0])
            if (string("aeiou").find(c) != string::npos)
                target++;
        // process rem words
        for (int i = 1; i < w.size(); i++) {
            int cnt = 0;
            for (char c : w[i])
                if (string("aeiou").find(c) != string ::npos)
                    cnt++;
            if (cnt == target)
                reverse(w[i].begin(), w[i].end());
        }
        // join back the words
        string ans = "";
        for (int i = 0; i < w.size(); i++) {
            ans += w[i];
            if (i != w.size() - 1)
                ans += " ";
        }
        return ans;
    }
};
