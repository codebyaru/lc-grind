#include <unordered_map>
using namespace std;

class Solution {
public:
    unordered_map<int,int> mp;

    int fib(int n) {
        if(n <= 1) return n;

        if(mp.count(n)) return mp[n];

        mp[n] = fib(n-1) + fib(n-2);
        return mp[n];
    }
};
