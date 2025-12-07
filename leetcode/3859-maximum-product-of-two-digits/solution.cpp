class Solution {
public:
    int maxProduct(int n) {
        vector <int> v;
        int prod=1; int maxi=0;
        while (n > 0) {
            int ldigit = n % 10;
            v.push_back(ldigit);
            n = n / 10;
        }
        for (int i=0;i<v.size();i++)
        {
            for (int j=i+1;j<v.size();j++)
            {
                prod=v[i]*v[j];
                 maxi=max(maxi,prod);
            }
        }
        return maxi;
        
    }
};
