class Solution {
public:
    int alternateDigitSum(int n) {
        //even indices add kr do 
        //odd wali add krke subtract
        int sum_even = 0; int sum_odd=0;
            string s = to_string(n);
            for(int i=0;i<s.size();i++){
                if(i%2==0) sum_even+=(s[i]-'0');
                else sum_odd+=(s[i]-'0');
            }
        return (sum_even-sum_odd);
    }
};
