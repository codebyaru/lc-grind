class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> friendSet(friends.begin(), friends.end());
        vector<int> res;
        for (int o : order)
            if (friendSet.count(o))
                res.push_back(o);
        return res;
    
    }
};
