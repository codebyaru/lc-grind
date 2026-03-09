class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxi =0; 
        int last=-1; int slast=-1;
        int curr=0; int laststreak=0;

        for (int fruit:fruits){
            if(fruit==last || fruit == slast)
            curr++;
            else 
            curr = laststreak+1;

            if(fruit == last) laststreak ++;
            else 
            {
                laststreak =1; 
                slast = last ; 
                last = fruit;
            }
            maxi = max(maxi, curr);
        }
        return maxi;
    }
};
