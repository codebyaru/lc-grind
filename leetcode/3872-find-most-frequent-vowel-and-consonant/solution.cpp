class Solution {
public:
    int maxFreqSum(string s) {
       unordered_map<char,int>freq;
       int vowel = 0; int consonant =0;
       for (char x:s){
        freq[x]++;
       }
       for(auto it:freq){
        char ch=it.first; 
        int count = it.second; 
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        vowel=max(vowel,count);
        
        else consonant = max(consonant,count);
       }
       return vowel + consonant; 
    }
};
