class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int o = 0;
        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] % 2==1) o++;
        }
        //checking if all odd or no odd(all even)
        if(o == 0 || o == nums1.size()) return true;
        int mini = *min_element(nums1.begin(), nums1.end());
        if(mini % 2 == 1) return true;
        return false;
    }
};
