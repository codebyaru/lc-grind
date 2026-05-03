class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int temp =n;
        int r=0; 
        while(temp>0){
            r=r*10+temp%10;
            temp=temp/10;
        }
        int start = min(n,r);
        int end = max(n,r);
        vector<bool>isprime(end+1,true);
        isprime[0]=false;
        isprime[1]=false;
        for (int i=2;i*i<=end;i++){
            if(isprime[i]){
                for(int j=i*i;j<=end;j+=i){
                    isprime[j]=false;
                }
            }
        }
        int sum=0;
        for (int i=start;i<=end;i++){
            if(isprime[i]) sum+=i;
        }
        return sum;
    }
};
