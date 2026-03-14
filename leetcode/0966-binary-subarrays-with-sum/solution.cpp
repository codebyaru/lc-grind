class Solution {
public:

    int lessthanequalgoal(vector<int>&nums, int goal){
        int left = 0, count = 0, n = nums.size(), sum = 0;
        for(int right = 0; right < n; right++){
            sum += nums[right];
            while(sum > goal && left <= right){
                sum -= nums[left];
                left++;
            }

            count += (right - left + 1);
        }
        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return lessthanequalgoal(nums, goal) - lessthanequalgoal(nums, goal-1);
    }
};
