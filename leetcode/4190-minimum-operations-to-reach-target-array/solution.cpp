class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        set<int> seen;
for (int i = 0; i < nums.size(); i++) {
    if (nums[i] != target[i]) {
        seen.insert(nums[i]);  
    }
}
return seen.size();
    }
};
