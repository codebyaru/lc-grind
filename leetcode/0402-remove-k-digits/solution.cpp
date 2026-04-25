class Solution {
public:
// 3 edge cases to be handled well 
    string removeKdigits(string num, int k) {
        stack<char> st;
        for (char c : num) {
            while (!st.empty() && k > 0 && st.top() > c) {
                st.pop();
                k--;
            }
            if (!st.empty() || c != '0') {
                st.push(c);
            }
        }
        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }
        
        if (st.empty()) return "0";
        
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
