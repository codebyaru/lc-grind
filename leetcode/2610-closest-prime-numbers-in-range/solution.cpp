class Solution {
public:
    bool isPrime(int n){
        if(n == 1)return false;
        if(n == 2)return true;
        
        for(int i=2; i*i <= n;i++ ){
            if(n%i == 0)return false;
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {

        int prev = -1;
        int d = INT_MAX;
        vector<int> best = {-1,-1};
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                if(prev!= -1){
                    if(i-prev < d){
                        best = {prev,i};
                        d = i-prev;
                        if(d <= 2)break;
                    }
                }
                prev = i;
            }
        }

        return best;
        
    }
};
