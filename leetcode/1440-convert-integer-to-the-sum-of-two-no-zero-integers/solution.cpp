class Solution {
public:
    bool nozero(int x) {
        while (x > 0) {
            if (x % 10 == 0)
                return false;
            x = x / 10; // to check middle zero damnnnn!!!!
        }
            return true;
        }
        vector<int> getNoZeroIntegers(int n) {
            for (int i = 1; i < n; i++) {
                if (nozero(i) && nozero(n - i))
                    return {i, n - i};
            }
                return {};
            }
        };
