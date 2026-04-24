class Solution {
public:
    vector<int> nnse(vector<int>&arr){
        int n=arr.size();
        vector<int>ans(n);
        stack<int>s;

        for(int i=n-1;i>=0;i--){
            int curr = arr[i];
            while(!s.empty() && arr[s.top()]>=arr[i]) 
            s.pop();
            ans[i]=!s.empty() ? s.top() :n;
            s.push(i);
        }
        return ans;
    }

    vector<int> pse(vector<int>&arr){
        int n =arr.size();
        vector<int>ans(n);
        stack<int>s;
        for(int i=0;i<n;i++){
            int curr = arr[i];
            while(!s.empty() && arr[s.top()]>arr[i]) 
            s.pop();
            ans[i] =  !s.empty() ? s.top() : -1;
            s.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse = nnse(arr);
        vector<int> psee =pse(arr);        
        int n = arr.size();
        int mod = 1e9 + 7; // Mod value
        
        int sum = 0;
        for(int i=0; i < n; i++) {
            
            int left = i - psee[i];
            int right = nse[i] - i;
            long long freq = left*right*1LL;
            int val = (freq*arr[i]*1LL) % mod;
            sum = (sum + val) % mod;
        }
        return sum;

    }
};
