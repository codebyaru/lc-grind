class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size(); int p=0;
        for (auto a:customers) 
            if (a=='Y') p++;
            int ans =p, best =0;
        for(int i=0;i<n;i++){
            if (customers[i]=='Y')p--;
            else p++;   
            if(p<ans) {
                ans=p;
                best = i+1;
            }
        }
return best;
    }
};
