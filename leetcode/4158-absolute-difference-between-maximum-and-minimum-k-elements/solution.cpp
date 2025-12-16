class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int small = 0;
        int large = 0;
        for (int i = 0; i < k; i++) {
            small = small + nums[i];
            large = large + nums[nums.size()-1-i];
        }
        return abs(small - large);
    }
};
