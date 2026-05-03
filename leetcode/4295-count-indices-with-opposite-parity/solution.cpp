class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> score(nums.size());
        int n = nums.size();
        int odd = 0;
        int even = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] % 2 == 0) {
                score[i] = odd;
                even++;
            } else {
                score[i] = even;
                odd++;
            }
        }
        return score;
    }
};
