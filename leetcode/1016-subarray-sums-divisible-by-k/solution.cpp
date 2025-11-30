class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        freq[0] = 1;
        int ans = 0;
        int prefix=0;

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            prefix = (sum % k + k) % k;
            ans = ans + freq[prefix]; // seen before
            freq[prefix]++;
        }
        return ans;
    }
};
