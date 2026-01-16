class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        //adding boundary fences 
        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);
        sort(hFences.begin(),hFences.end());
        sort(vFences.begin(),vFences.end());
        //possible gaps in hori
        unordered_set<int> hGaps;
        for(int i=0;i<hFences.size();i++){
            for (int j=i+1; j<hFences.size();j++){
                hGaps.insert(hFences[j]-hFences[i]);
            }
        }
        //checking if same vertical exists 
        long long side = -1; 
        for (int i=0;i<vFences.size();i++){
            for (int j=i+1; j<vFences.size();j++){
                int curgap = vFences[j]-vFences[i];
                if(hGaps.count(curgap)) side = max(side, (long long) curgap);
            }
        }
        if(side ==-1) return -1; 
         long long MOD= 1e9+7;
         return (side*side)%MOD;

    }
};
