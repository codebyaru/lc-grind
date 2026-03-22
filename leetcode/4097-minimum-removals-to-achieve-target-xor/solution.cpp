class Solution {
public:
    int minRemovals(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        mpp[0] = 0;
        for (int num : nums) {
            auto temp = mpp; //copy map stored in temp 
            for (auto it : mpp) {
                int maxi = it.first ^ num;
                temp[maxi] = max(temp[maxi], it.second + 1);
            }
            mpp = temp;
        }

        if (mpp.find(target) == mpp.end()) return -1;

        return n - mpp[target];
    }
};

