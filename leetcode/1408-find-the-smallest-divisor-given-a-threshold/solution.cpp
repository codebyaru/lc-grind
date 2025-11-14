class Solution {
public:
    int getSum(vector<int>& nums, int d) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] + d - 1) / d; // ceil(nums[i] / d)
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low <= high) {
            int mid = (low + high) / 2;
            if (getSum(nums, mid) <= threshold)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};

