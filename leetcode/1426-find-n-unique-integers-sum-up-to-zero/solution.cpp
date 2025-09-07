class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        for (int i = -n / 2; i <= n / 2; i++) {
            v.push_back(i);
        }
        if (n % 2 == 0)
            v.erase(v.begin() + n / 2);
        return v;
    }
};
