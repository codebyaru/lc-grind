class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        vector<int>ans(n);
        for (int i=2*n-1;i>=0;i--){
            int ind=i%n;
            int curr = nums[ind];
            while(!st.empty() && st.top()<=curr){ //chota h to nikal do stack se, hume greater chahhiiyeee
                st.pop();
            }
            if(i<n)
                ans[i]=st.empty()? -1:st.top();
            st.push(curr);  
        }
        return ans;
    }
};
