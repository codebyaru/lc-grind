class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(char x:magazine) 
        mp[x]++;
        for (int i=0;i<ransomNote.size();i++){
            if(mp[ransomNote[i]]==0) return false;
            mp[ransomNote[i]]--;
        }
        return true;
    }
};
