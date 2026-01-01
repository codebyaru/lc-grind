class Solution {
public:
    bool checkValidString(string s) {
         int mini=0; int maxi=0;
         for (auto x:s){
            if(x=='('){
                mini = mini+1;;
                maxi = maxi+1;
            }
            else if (x==')'){
                mini = mini-1;
                maxi = maxi-1;
            }
            else 
            {
            mini = mini-1;
            maxi = maxi+1;
            }
         if(maxi<0) return false;
         if (mini<0) mini=0;
         }
         return (mini==0);
    }
};
