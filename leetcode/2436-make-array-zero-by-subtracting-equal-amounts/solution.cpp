class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        //basically find number of unique elements 
        unordered_set<int>s;
        for (int x:nums) {
            if(x!=0)
            s.insert(x);}
        return s.size();
    }
};
