class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int ind=-1; long long sum1=0; long long sum2=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] > nums[i + 1]) 
            {ind = i; break;}
        }
        if (ind ==-1) ind = nums.size()-1;
        for (int i=0;i<=ind;i++){
            sum1+=nums[i];
        }
            for (int i = ind; i < nums.size(); i++) {
            sum2 += nums[i];
        }
        if(sum1>sum2) return 0; 
        else if (sum2>sum1) return 1;
        else return -1;
    }
};
