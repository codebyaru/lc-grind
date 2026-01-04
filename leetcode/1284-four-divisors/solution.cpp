class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        long long ans=0;
        for (int n:nums){
            int cnt=0; long long sum=0; 
            for (int i=1;i*i<=n;i++){
                if(n%i==0){
                    cnt++; 
                    sum=sum+i;
                    if(i!=n/i){ //not perfect sq number 
                        cnt++; 
                        sum=sum+n/i;
                    }
                }
                if (cnt>4) break;
            }
            if(cnt==4) 
            ans+=sum;
        }
        return ans;
    }
};
