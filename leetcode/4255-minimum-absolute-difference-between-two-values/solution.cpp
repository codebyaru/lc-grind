class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
     int n1=-1; int n2=-1;
        int mini=INT_MAX;
    for (int i=0;i<nums.size();i++){
        if(nums[i]==1) n1=i;
        else if(nums[i]==2) n2=i;
        if(n1!=-1 && n2!=-1) 
            mini = min(mini,abs(n2-n1));}
            return (mini == INT_MAX) ? -1 : mini;
    }
};
