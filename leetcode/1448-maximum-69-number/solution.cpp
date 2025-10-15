class Solution {
public:
    int maximum69Number (int num) {
        vector<int> digits;
        int n = num;

        // extract digits (reverse order)
        while(n > 0) {
            digits.push_back(n % 10);
            n /= 10;
        }

        // reverse to correct order
        reverse(digits.begin(), digits.end());

        // change first 6 to 9
        for(int i = 0; i < digits.size(); i++) {
            if(digits[i] == 6) {
                digits[i] = 9;
                break;
            }
        }

        // convert back to integer
        int ans = 0;
        for(int i = 0; i < digits.size(); i++)
            ans = ans * 10 + digits[i];

        return ans;
    }
};

