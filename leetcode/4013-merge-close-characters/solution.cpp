class Solution {
public:
    string mergeCharacters(string s, int k) {
       string res;
       for (char c:s)
        if(find(res.end()-min(k,(int)res.length()), res.end(), c) ==res.end())
        res+=c;
        return res;
    }
};
