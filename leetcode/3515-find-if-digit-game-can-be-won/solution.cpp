class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
    int single = 0, dbl = 0;
    for(int x : nums) {
        if(x < 10) single += x;
        else if(x >= 10 && x < 100) dbl += x;
    }
    return (single > dbl) || (dbl > single);
}
};
