class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int,int>count;
        for (int x:nums){
            int rem = (x%value + value)%value;
            count[rem]++;
        }
        int mex=0;
        while(count[mex%value]>0) {
            count[mex%value]--;
            mex++;}
            return mex;
        }
};
