class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1, ans = n;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target)
                return mid;
            else if (target < nums[mid]) {
                ans = mid;         // insert before mid
                high = mid - 1;
            } 
            else {
                low = mid + 1;     // insert after mid
                ans = low;         // ✅ not mid
            }
        }
        return ans;
    }
};

