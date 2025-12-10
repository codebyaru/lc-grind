class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map<int,int> mpp;
       int ans =-1;
        for (int x:arr) mpp[x]++;
        for (auto it:mpp){
            if (it.first == it.second)
            ans = max(ans,it.first);
        }
        return ans;
    }
};
