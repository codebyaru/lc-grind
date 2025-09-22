class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> v1(nums.size(), 1); // initially freq = 1 for each element

        // count frequencies
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    v1[i]++;   // count at position i
                }
            }
        }

        // find max freq
        int maxf = *max_element(v1.begin(), v1.end());

        // sum all elements with max freq
        int ans = 0;
        for (int x : v1) {
            if (x == maxf) ans += x;
        }

        return ans;
    }
};

