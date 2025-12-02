class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m = {
            {'I',1},{'V',5},{'X',10},{'L',50},
            {'C',100},{'D',500},{'M',1000}
        };

        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            int curr = m[s[i]];
            int next = (i+1 < s.size()) ? m[s[i+1]] : 0;
            ans += (curr < next) ? -curr : curr;
        }
        return ans;
    }
};

