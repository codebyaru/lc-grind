class Solution {
public:
    int mirrorFrequency(string s) {
        vector<vector<int>> letter_pairs(13, vector<int>(2, 0));
        vector<vector<int>> digit_pairs(5, vector<int>(2, 0));
        
        for (char c : s) {
            if (c >= 'a' && c <= 'z') {
                if (c <= 'm') {
                    letter_pairs[c - 'a'][0]++;       // 'a' maps to 0
                } else {
                    letter_pairs['z' - c][1]++;       // 'z' maps to 0
                }
            } else if (c >= '0' && c <= '9') {
                if (c <= '4') {
                    digit_pairs[c - '0'][0]++;        // '0' maps to 0
                } else {
                    digit_pairs['9' - c][1]++;        // '9' maps to 0
                }
            }
        }
        
        int total_sum = 0;
        
        // Compute differences for grouped letters
        for (int i = 0; i < 13; i++) {
            if (letter_pairs[i][0] > 0 || letter_pairs[i][1] > 0) {
                total_sum += abs(letter_pairs[i][0] - letter_pairs[i][1]);
            }
        }
        
        // Compute differences for grouped digits
        for (int i = 0; i < 5; i++) {
            if (digit_pairs[i][0] > 0 || digit_pairs[i][1] > 0) {
                total_sum += abs(digit_pairs[i][0] - digit_pairs[i][1]);
            }
        }
        
        return total_sum;
    }
};
