class Solution {
public:
    int countElements(vector<int>& nums) {
        if(nums.size() < 3) return 0;
        int mn = nums[0], mx = nums[0];
        // find min and max
        for(int i = 0; i < nums.size(); i++){
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > mn && nums[i] < mx)
                count++;
        }
        return count;
    }
};
