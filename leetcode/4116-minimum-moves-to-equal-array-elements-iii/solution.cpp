class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count =0;
        int max= *max_element(nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++)
            {
               int sub= max-nums[i];
                count = count +sub;
            }
        return count;
    }
    
};
