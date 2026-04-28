class Solution {
public:
    string sortVowels(string s) {
        int freq[256]={0};
        int ind[256]={0};
        vector<char> vowels;

        for (int i=0;i<256;i++) ind[i]=-1;

        auto isvow=[](char c){
            return c=='a' || c=='e' || c == 'i' || c == 'o' || c == 'u';
        };
        for (int i=0;i<s.length();i++){
            if(isvow(s[i])){
                if(ind[s[i]]==-1) ind[s[i]]=i;
            freq[s[i]]++;
            vowels.push_back(s[i]);
            }
        }
        sort(vowels.begin(), vowels.end(), [&](char a, char b){
            if(freq[a]!=freq[b]){
                return freq[a]>freq[b];
            }
            return ind[a]<ind[b];
        });
        int vin = 0; 
        for (int i=0;i<s.length();i++){
            if(isvow(s[i])) s[i] = vowels[vin++];
        }
        return s;
    }
};
