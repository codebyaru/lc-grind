class Solution {
public:
    bool isValid(string word) {
        bool vowel = false , cons = false;
        if(word.size()<3) return false;
            for(int i=0;i<word.size();i++){
                char c = word[i];
                if(!isalnum(c)) return false; 
                c = tolower(c);
                if(c>='a'&&c<='z') {    
                    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vowel = true;
                else cons = true;
            }
        }
        return vowel && cons; 
    }
};
