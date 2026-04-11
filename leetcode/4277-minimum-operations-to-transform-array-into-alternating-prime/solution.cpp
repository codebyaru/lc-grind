class Solution {
public:
    bool prime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        // vector<int>ans=nums;
        int a = 0;
        for (int i = 0; i < nums.size(); i++) {
            int val = nums[i];
            if (!(i & 1)) {
                while (!prime(val)) {
                    val++;
                    a++;
                }
            }

            else {
                while (prime(val)) {
                    val++;
                    a++;
                }
            }
        }

        return a;
    }
};
