class Solution {
public:
    int minOperations(int k) {
        if (k == 1) return 0;
        int root = sqrt(k);
        int copies = (k + root - 1) / root; 
        return (root - 1) + (copies - 1);
    }
};
