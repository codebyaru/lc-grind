class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(), nums.end());
        int start = nums[0];
        int end = nums[nums.size() - 1];
        int j = 0;
        for (int i = start; i <= end; i++) {
            if (j <= nums.size() && nums[j] == i)
                j++;
            else
                v.push_back(i);
        }
        return v;
    }
};
