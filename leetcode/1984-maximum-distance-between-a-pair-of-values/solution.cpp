class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
     int maxi =0; 
     for (int i=0;i<nums1.size();i++){
        int low =i; int high = nums2.size()-1;
        int ans =i-1; //default invalid dist
        while(low<=high){
            int mid =(low+high)/2;
            if(nums2[mid]>=nums1[i]){
                ans = mid; 
                low = mid+1;
            }
            else high = mid-1;
        }
        maxi = max(maxi,ans-i);
     }   
     return maxi;
    }
};
