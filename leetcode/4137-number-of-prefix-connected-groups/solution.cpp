class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for (int i=0;i<words.size();i++){
            if(words[i].size()>=k){
                string prefix = words[i].substr(0,k);
                mp[prefix]++;
            }
        }
        int count=0;
        for (auto &it:mp){
            if(it.second>=2) count ++;
        }
        return count;
    }
};
