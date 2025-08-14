class Solution {
public:
    string largestGoodInteger(string num) {
    char maxDigit = 0; // to store the biggest digit found
    int count = 1;

    for(int i = 1; i < num.size(); i++) {
        if(num[i] == num[i-1]) {
            count++;
            if(count == 3) { // found 3 same digits
                maxDigit = max(maxDigit, num[i]);
            }
        } else {
            count = 1; // reset counter
        }
    }

    if(maxDigit == 0) return ""; // no good integer found
    return string(3, maxDigit);
    }
};
