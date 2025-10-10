class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int ssum = 0;
        for (int i = 0; i < nums.size(); i++) {

            ssum = ssum + nums[i];
            sum.push_back(ssum);
        }
        return sum;
    }
};
