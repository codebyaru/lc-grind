class Solution {
public:
    string largestOddNumber(string num) {
        int lastOdd = -1;
        for (int i = 0; i < num.length(); i++) {
            if ((num[i] - '0') % 2 !=0)
                lastOdd = i;
        }
        if (lastOdd == -1) return "";
        return num.substr(0, lastOdd + 1);
    }
};

