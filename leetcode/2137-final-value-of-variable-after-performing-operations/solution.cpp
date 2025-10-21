class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int temp = 0;
        int x = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i].find('+') != string::npos) {
                x = x + 1;
            } else
                x = x - 1;
        }
        temp = x;
        return temp;
    }
};
