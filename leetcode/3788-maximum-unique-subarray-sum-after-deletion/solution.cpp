class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> s;
        int maxi = *max_element(nums.begin(), nums.end());
        if (maxi < 0)
            return maxi;
        for (int x : nums) {
            if (x > 0)
                s.insert(x);
        }
        return accumulate(s.begin(), s.end(), 0);
    }
};
