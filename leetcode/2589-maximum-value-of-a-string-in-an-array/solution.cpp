class Solution {
public:
    int val(string s){
        int r=0; 
        for(char c:s){
            if(c<'0' || c>'9') return s.size();
            else r=r*10+c-'0';
        }
        return r;
    }
    int maximumValue(vector<string>& strs) {
        int ans =0; 
        for (auto it: strs){
            ans = max(ans, val(it));
        }
        return ans;
    }
};
