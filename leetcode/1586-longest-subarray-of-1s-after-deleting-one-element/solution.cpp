class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0, r = 0;
        int zc = 0;
        int maxi = 0;
        while (r < nums.size()) {
            if (nums[r] == 0)
                zc++;
            while (zc > 1) {
                if (nums[l] == 0)
                    zc--;
                l++;
            }
            maxi = max(maxi, r - l);
            r++;
        }
        return maxi;
    }
};
