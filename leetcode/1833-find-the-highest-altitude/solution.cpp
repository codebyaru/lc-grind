class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans =0; int val=0;
        for(int it:gain){
            val+=it;
            ans=max(ans,val);
        }
        return ans;
    }
};
