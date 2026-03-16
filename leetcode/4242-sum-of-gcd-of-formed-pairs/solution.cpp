class Solution {
public:
    long long gcdSum(vector<int>& nums) {
     int n = nums.size();
        
        vector<long long> pref(n);
        long long mx = nums[0];

        for(int i = 0; i < n; i++){
            mx = max(mx, (long long)nums[i]);
            pref[i] = __gcd((long long)nums[i], mx);
        }

        sort(pref.begin(), pref.end());

        long long ans = 0;
        int l = 0, r = n - 1;

        while(l < r){
            ans += __gcd(pref[l], pref[r]);
            l++;
            r--;
        }

        return ans;   
    }
};
