class Solution {
public:
    long long totalhours(vector<int>& piles, int speed) {
        long long totalh = 0;
        for (int x : piles) {
            totalh += (x + speed - 1) / speed;  // integer ceil
        }
        return totalh;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());

        while (low < high) {
            int mid = (low + high) / 2;

            if (totalhours(piles, mid) <= h)
                high = mid;        // try smaller speed
            else
                low = mid + 1;     // need more speed
        }
        return low;
    }
};

