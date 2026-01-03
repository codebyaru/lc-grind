class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& arr) {
        int first = INT_MIN;   // largest
        int second = INT_MIN;  // second largest
        int third = INT_MAX;   // smallest

        for (int value : arr) {
            // update largest and second largest
            if (value > first) {
                second = first;
                first = value;
            } 
            else if (value > second) {
                second = value;
            }

            // update smallest
            third = min(third, value);
        }

        return first + second - third;
    }
};
