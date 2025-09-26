class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //sorting the string vector lexicographically
        sort (strs.begin(),strs.end());
        string ans = "";
        string first = strs[0];
        string last = strs[strs.size()-1];
       int minlength = min(first.size(),last.size());
       for (int i=0; i<minlength; i++)
       {
        if (first[i]!=last[i])
        break;
        ans+=last[i];   //first or last any 
       }
       return ans;
       
    }

};
