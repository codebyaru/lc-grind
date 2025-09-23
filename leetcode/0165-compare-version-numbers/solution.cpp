class Solution {
public:
    int compareVersion(string version1, string version2) {
        int v1=0;
        int v2=0;
        int n=version1.size();
        int m = version2.size();
        while (v1<n||v2<m)
        {
            long num1=0;
             long num2=0;
            while (v1<n && version1[v1]!='.')
            {
            num1 = num1 * 10+(version1[v1]-'0');
            v1++;
            }
            v1++;
            while (v2<m && version2[v2]!='.')
            {
            num2 = num2 * 10+(version2[v2]-'0');
            v2++;
            }
            v2++;

        if (num1<num2)
        return -1;
        else if (num1>num2)
        return 1;
        }
return 0;
    }
    
};
