class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        set<int>s;
        for(int x:bulbs){
            if(s.count(x)) s.erase(x);
            else s.insert(x); 
        }
        vector<int>v(s.begin(),s.end());
        return v;
    }
};
