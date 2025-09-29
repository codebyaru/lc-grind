class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];   // min price so far
        int profit = 0;
        
        for (int i = 1; i < n; i++) {
            buy = min(buy, prices[i]);                  // update min price
            profit = max(profit, prices[i] - buy);      // update max profit
        }
        return profit;
    }
};

