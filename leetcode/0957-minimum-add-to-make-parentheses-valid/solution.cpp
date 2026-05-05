class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
        int c=0;
        for(char x:s){
            if(x=='(') st.push('(');
            // if(x==')' && st.top()=='(') st.pop();
            // else  c++;
            else 
            {
                if(!st.empty() && st.top()=='(') st.pop();
                else c++;
            }
        }
        return c+st.size();
    }
};
