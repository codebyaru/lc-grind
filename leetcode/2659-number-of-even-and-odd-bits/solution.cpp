class Solution {
public:
    vector<int> evenOddBit(int n) {
        int e=0,o=0,i=0;
        while(n>0){
            if(n%2==1){
                if(i%2==0)e++;
                else o++;
            }
            n=n/2;
            i++;
        }
        return {e,o};
    }
};
