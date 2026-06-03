class Solution {
    public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mn = prices[0];

        for (int price : prices) {
            mn = min(mn, price);
            profit = max(profit, price - mn);
        }

        return profit;
    }
};