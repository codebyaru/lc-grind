class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int,int>v1;
        long long sum=0; int i=0;
        int ans = INT_MAX;

        for (int j=0;j<nums.size();j++){
            if(v1[nums[j]]==0) 
            sum = sum+nums[j];
            v1[nums[j]]++;
        
        while(sum>=k){
            ans = min(ans,j-i+1);
            v1[nums[i]]--;
            if(v1[nums[i]]==0) sum -=nums[i];
            i++;
        }
    }
        return ans==INT_MAX?-1:ans;
    }
};
