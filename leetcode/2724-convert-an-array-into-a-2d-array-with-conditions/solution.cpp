class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x: nums) mp[x]++;

        vector<vector<int>> ans;

        while(!mp.empty()){
            vector<int> rows;

            for(auto it = mp.begin(); it != mp.end(); ){
                int num = it->first;
                rows.push_back(num);
                it->second--;

                if(it->second == 0) it = mp.erase(it);
                else it++;
            }

            ans.push_back(rows);
        }

        return ans;
    }
};
