class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int> freq;
        for (int x:nums) freq[x]++;

        vector <int> v1;
        for (auto it: freq) v1.push_back(it.first);
        sort(v1.begin(),v1.end());
        for (int i=0;i<v1.size();i++){
            for (int j=i+1; j<v1.size();j++){
                int x=v1[i];
                int y=v1[j];
                if (freq[x]!=freq[y]) return {x,y};
            }
        }
        return {-1,-1};
    }
};
