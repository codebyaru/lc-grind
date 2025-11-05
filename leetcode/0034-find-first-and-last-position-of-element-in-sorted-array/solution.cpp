class Solution {
public:
    int firstocc(vector<int>&nums, int target)
    {
        int low=0; int high = nums.size()-1; int ans1=-1;
        while (low<=high)
        {
            int mid = (low+high)/2;
            if (nums[mid]==target)
            {
                ans1=mid;
                high = mid-1;
            }
            else if (nums[mid]<target)
            low = mid+1;
            else 
            high = mid-1;
        }
        return ans1;
    }
    int lastocc(vector<int>&nums, int target)
    {
    int low=0; int high = nums.size()-1; int ans1=-1;
        while (low<=high)
        {
            int mid = (low+high)/2;
            if (nums[mid]==target)
            { ans1=mid; low = mid+1;}
            else if (nums[mid]<target) low = mid+1;
            else 
            high = mid-1;
        }
        return ans1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstocc(nums,target);
        int last = lastocc(nums,target);
        return {first,last};
    }
};
