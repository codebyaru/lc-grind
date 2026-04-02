class Solution {
public:
    int numWaterBottles(int b, int e) {
        int total = b;
        int emp=b;
        while(emp>=e){
            int n=emp/e;
            total+=n;
            emp=n+(emp%e);
        }
        return total;
    }

};
