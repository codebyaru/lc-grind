class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        if(words[startIndex]==target) return 0;
        int n = words.size();
        int i = 1;
        int prev = (startIndex-i+n)%n; //ADDING BY i TO KKNOW KITNE STEPS AAGE AA GYE 
        int next = (startIndex+i+n)%n;
        while(prev!=next){
            if(words[prev] == target || words[next]==target) return i; 
            i++;    
            prev = (startIndex-i+n)%n;
            next = (startIndex+i+n)%n;
        }
        if(words[prev] == target || words[next]==target) return i; 
        return -1;
    }
};
