class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int high=n-1,low=0;
        while (high>=low)
        {
            int mid=(low+high)/2;
             if (target<nums[mid])
            {
                high = mid-1;
            }
            else if (target>nums[mid])
            low= mid + 1;
            else if (target ==nums[mid])
            return mid;
        }
        return -1;
    }
};
