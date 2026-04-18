class Solution {
public:
    int reverse(int x){
        int rev = 0;
        while(x > 0){
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int mini = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            int rev = reverse(nums[i]);
            if(mpp.count(nums[i])){
                mini = min(mini, i - mpp[nums[i]]);
            }

            // store reverse as key
            mpp[rev] = i;
        }

        return (mini == INT_MAX) ? -1 : mini;
    }
};
