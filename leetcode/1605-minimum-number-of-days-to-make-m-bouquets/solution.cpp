class Solution {
public:
    bool possible(vector<int>&bloomDay, int day, int m, int k)
    {
        int n = bloomDay.size();
        int count=0; int nb=0;
        // to count no of bouq we can make 
        for (int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=day) count++;
            else 
            {nb = nb+ (count/k);
            count =0;}
        }
        nb = nb+(count/k);
        return nb>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m*1ll*k*1ll;
        int n=bloomDay.size();
        if (val>n) return -1;
        int mini=INT_MAX; int maxi=INT_MIN;
        // find out the range for binary search 
        for (int i=0;i<bloomDay.size();i++)
        {
            mini= min(mini, bloomDay[i]);
            maxi= max(maxi, bloomDay[i]);
        }

        // now applying binarysearch 
        int low = mini; int high = maxi;
        while (low<=high)
        {
            int mid = (low+high)/2;
            if (possible(bloomDay, mid,m,k))
            high = mid-1;
            else 
            low=mid+1;
        }
        return low;
    }
};
