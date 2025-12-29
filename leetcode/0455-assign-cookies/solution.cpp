class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0,j=0;
        sort(g.begin(),g.end()); sort(s.begin(), s.end());
        int n1=g.size(),n2=s.size();
        while(i<n1 && j<n2){
            if(s[j]>=g[i]) i=i+1; // ek kid satisfy ho gya isley i++
        // Number of students satisfied is equal to studentIndex

        j++;
        }
        return i;
    }
};
