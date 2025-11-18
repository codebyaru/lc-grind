class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v3;
        for(int i=0;i<nums1.size();i++) v3.push_back(nums1[i]);
        for(int i=0;i<nums2.size();i++) v3.push_back(nums2[i]);
        sort(v3.begin(),v3.end());
        int n=v3.size();
        if(n%2==1) return v3[n/2];
        else
        return (v3[n/2] + v3[n/2 - 1]) / 2.0;
    }
};
