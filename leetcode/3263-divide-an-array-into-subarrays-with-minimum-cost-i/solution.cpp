class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int m1=INT_MAX;
        int m2=INT_MAX;
        for(int i=1;i<nums.size();i++){
            if (nums[i]<m1) {
                m2=m1; //if another small is found then that wil be m1 and m2=m1;
                m1=nums[i];
        }//finding smallest and second smallest
        else if (nums[i]<m2) m2=nums[i];
        }
        return nums[0]+m1+m2;
    }
};
