class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int oo=0, ee=0, oe=1;
        int prev = nums[0]%2;
        if (prev)
        oo++;
        else ee++;
        for (int i=1; i<nums.size(); i++)
        {
            int parity = nums[i]%2;
            if (parity ==0) ee++;
            else oo++;
            if (prev !=parity)
            {
                oe++;
                prev = parity;
            }
        } 
     return max(max(oo,oe),ee);   
    }
};
