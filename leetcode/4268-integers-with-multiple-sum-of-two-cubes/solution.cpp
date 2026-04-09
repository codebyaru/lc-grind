class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<int,int>freq;
        vector<int>v;
        for (int a=0;a<1000;a++){
            for (int b=a;b<1000;b++){
                int x=a*a*a+b*b*b;
                if(x>n) break;
                else
                freq[x]++;
            }
        }
        for (auto it:freq){
            if (it.second>=2) v.push_back(it.first);
        }
         sort(v.begin(),v.end());
         return v;
    }
};
