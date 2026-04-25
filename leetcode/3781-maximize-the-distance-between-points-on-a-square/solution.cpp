class Solution {
public:
    bool canplace(const vector<long long>& pos, int k, long long dist, int m, long long peri) {
        for (int i = 0; i < m; i++) {
            int c = 1;
            long long last = pos[i];
            int curr_idx = i;

            // Greedily find next points using Binary Search (lower_bound) to avoid TLE
            for (int step = 1; step < k; step++) {
                auto it = lower_bound(pos.begin() + curr_idx + 1, pos.begin() + i + m, last + dist);
                if (it == pos.begin() + i + m) {
                    break;
                }
                last = *it;
                curr_idx = distance(pos.begin(), it);
                c++;
            }

            // Ensure we placed k points AND the circular distance back to the start is valid
            if (c == k && (pos[i] + peri - last >= dist)) {
                return true;
            }
        }
        return false;
    }

    int maxDistance(int side, vector<vector<int>>& points, int k) {
        int n = points.size();
        long long peri = 4LL * side;
        vector<long long> pos;
        pos.reserve(n * 2);

        // Flatten the perimeter into a 1D line
        for (int i = 0; i < n; i++) {
            long long x = points[i][0];
            long long y = points[i][1];

            if (x == 0) pos.push_back(y);
            else if (y == side) pos.push_back(side + x);
            else if (x == side) pos.push_back(2LL * side + (side - y));
            else pos.push_back(3LL * side + (side - x));
        }

        sort(pos.begin(), pos.end());

        int m = pos.size();

        // Duplicate the array to handle the circular nature of the square
        for (int i = 0; i < m; i++) {
            pos.push_back(pos[i] + peri);
        }

        long long low = 0, high = peri / k, ans = 0;

        // Binary Search on the answer
        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (canplace(pos, k, mid, m, peri)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
