class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>j(jewels.begin(),jewels.end());
        int count =0;
        for (auto it: stones)
        if (j.count(it)) count++;
        return count;    
    }
};
