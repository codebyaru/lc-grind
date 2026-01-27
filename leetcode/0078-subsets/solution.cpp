class Solution {
public:
    void helper(vector<int>&nums, int index,vector<int>&curr, vector<vector<int>>&res){
        if(index==nums.size()){
            res.push_back(curr); return;
        }
        //exclude 
        helper(nums, index+1, curr, res);
        //include
        curr.push_back(nums[index]);
        helper(nums, index+1, curr, res);
        curr.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>res;
       vector<int>curr;
       helper(nums, 0, curr, res);
       return res; 
    }
};
