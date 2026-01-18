class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int freq = 0, maxFreq = 0, ans = -1;

        for (int i = 0; i < nums.size(); ) {
            if (nums[i] % 2 != 0) {
                i++;
                continue;
            }

            int cnt = 0;
            int val = nums[i];

            while (i < nums.size() && nums[i] == val) {
                cnt++;
                i++;
            }

            if (cnt > maxFreq) {
                maxFreq = cnt;
                ans = val;
            }
        }
        return ans;
    }
};

