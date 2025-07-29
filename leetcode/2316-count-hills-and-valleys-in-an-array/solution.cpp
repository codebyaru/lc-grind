class Solution {
public:
    int countHillValley(vector<int>& nums) {
    vector<int> v;
    
    // Step 1: Remove consecutive duplicates
    v.push_back(nums[0]);
    for(int i=1; i<nums.size(); i++) {
        if(nums[i] != nums[i-1]) {
            v.push_back(nums[i]);
        }
    }

    // Step 2: Count hills and valleys
    int count = 0;
    for(int i=1; i<v.size()-1; i++) {
        if(v[i] > v[i-1] && v[i] > v[i+1]) count++; // hill
        if(v[i] < v[i-1] && v[i] < v[i+1]) count++; // valley
    }

    return count;
    }
};
