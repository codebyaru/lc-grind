class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
        for(int i=0;i<nums.size();i++){
     int x = *min_element(nums.begin(),nums.end());  
     if(nums[i]==x)
     {
        nums[i]=x*multiplier;
        break;
     }
    }}
    return nums;
    }
};
