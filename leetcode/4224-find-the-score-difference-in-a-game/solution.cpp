class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool active=true;
        int score1=0, score2=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]%2!=0) active =!active;
            if((i+1)%6==0)    active=!active;

            if(active) score1+=nums[i];
            else score2+=nums[i];
        }
        return score1-score2;
    }
};
