class Solution {
public:
    // Helper to check if subarray of length k starting at index 'start' is strictly increasing
    bool isStrictlyIncreasing(vector<int>& nums, int start, int k) {
        for(int i = start; i < start + k - 1; i++) {
            if(nums[i] >= nums[i + 1]) return false;
        }
        return true;
    }

    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        if(n < 2 * k) return false; // not enough elements for two adjacent subarrays

        for(int i = 0; i + 2 * k - 1 < n; i++) { // space for both subarrays
            if(isStrictlyIncreasing(nums, i, k) && isStrictlyIncreasing(nums, i + k, k))
                return true;
        }
        return false;
    }
};

