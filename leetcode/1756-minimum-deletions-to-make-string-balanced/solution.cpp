class Solution {
public:
    int minimumDeletions(string s) {
        int del=0; 
        stack<char>st;
        for(char c:s){
            if(!st.empty() && st.top()=='b' && c=='a'){
                st.pop(); //remove b
                del++; 
            }
            else st.push(c);
        }
        return del;
    }
};
