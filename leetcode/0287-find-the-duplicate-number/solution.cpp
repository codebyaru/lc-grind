class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // pehle loop m cycle bna rhe h, equal dekhke and
        // doosre loop me dup find kr rhe
        int slow = nums[0];
        int fast = nums[slow];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        slow = 0;
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast]; // moving 1 step ahead
        }
        return slow;
    }
};
