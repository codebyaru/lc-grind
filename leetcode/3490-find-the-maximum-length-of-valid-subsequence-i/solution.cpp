class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int e=0,o=0, alternating =0; int lastparity = -1;
        for (int i:nums){
            int parity = i%2;
            if(parity==0) e++;
            else o++;
        if(parity!=lastparity)
        {
            alternating ++;
            lastparity = parity;
        }
        }
        return max({o,e,alternating});
    }
};
