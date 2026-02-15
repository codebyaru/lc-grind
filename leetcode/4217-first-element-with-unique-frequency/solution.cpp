class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        unordered_map<int,int>freqcount;
        for(auto it:freq){
            freqcount[it.second]++;
        }

        for (int i=0;i<n;i++){
            if(freqcount[freq[nums[i]]]==1) //nested map access
            return nums[i];
        }
        return -1;
    }
};
