class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {

        vector<long long> t(nums.begin(), nums.end()); // required
        vector<long long> res;

        for(int i = 0; i < t.size(); i++) {

            res.push_back(t[i]);

            while(res.size() >= 2 &&
                  res[res.size()-1] == res[res.size()-2]) {

                long long x = res.back();
                res.pop_back();
                res.back() += x;
            }
        }

        return res;
    }
};

