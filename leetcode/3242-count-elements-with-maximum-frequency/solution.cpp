class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;   
        for (int x : nums) freq[x]++;
        int maxi = 0;
        for (auto it : freq) {
            maxi = max(maxi, it.second);
        }
        int count = 0;
        for (auto it : freq) {
            if (it.second == maxi) count += maxi;
        }
        return count;
    }
};
