class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int count =0;
        int i=bits.size()-2;
        while(i>=0 && bits[i]==1)
        {
            count ++;
            i--;
        }
        return (count %2==0);
    }
};
