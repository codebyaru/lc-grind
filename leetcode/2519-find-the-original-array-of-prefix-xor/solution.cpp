class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int>pre(n);
        pre[0] = pref[0];
        for (int i = 0; i < n - 1; i++) {
            int p = pref[i] ^ pref[i + 1];
            pre[i+1] = p; //storing at next index
        }
        return pre;
    }
};
