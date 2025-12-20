class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>freq;
        int dup=0;
        for (int x:nums)
            {
                if(++freq[x]==2) dup ++;
            }
        int ops =0; int i=0; int n=nums.size();
        while (i<n && dup>0)
            {
                for (int k=0;k<3 && i<n;k++,i++)
                    {
                        if (freq[nums[i]]--==2)dup--;
                    }
                ops++;
            }
        return ops;
    }
};
