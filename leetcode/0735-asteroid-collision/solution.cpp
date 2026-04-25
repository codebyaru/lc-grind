class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        vector<int> ans;
        for (auto aa: a){
            if (st.empty()) st.push(aa);
            else if (st.top()<0) st.push(aa);
            else {
                if (aa>0) st.push(aa);
                else {
                    while (!st.empty() && abs (st.top())<abs (aa) && st.top()>0) st.pop();
                    if (st.empty()) st.push(aa);
                    else if (st.top()==-aa) st.pop();
                    else if (st.top()<-aa) st.push (aa);
                }
            }
        }
        while (!st.empty()){ ans.push_back (st.top());st.pop();}
        reverse (ans.begin(),ans.end());
        return ans;
    }
};
