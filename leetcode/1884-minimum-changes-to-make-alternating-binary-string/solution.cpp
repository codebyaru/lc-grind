class Solution {
public:
    int minOperations(string s) {
        int ops1 = 0, ops2 = 0;
        for(int i = 0; i < s.size(); i++) {
            if(i % 2 == 0) {
                if(s[i] != '0') ops1++; // pattern 0101
                if(s[i] != '1') ops2++; // pattern 1010
            }
            else {
                if(s[i] != '1') ops1++;
                if(s[i] != '0') ops2++;
            }
        }
        return min(ops1, ops2);
    }
};
