class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total = 0;
        int count = 0;
        int lsum = 0;
        int rsum = 0;
        for (int x : nums) {
            total = total + x;
        }
        for (int i = 0; i < nums.size()-1; i++) {
            lsum = lsum + nums[i];
            rsum=total-lsum;
            if ((lsum-(rsum))%2==0) {
                count++;
            }
        }
        return count;
    }
};
