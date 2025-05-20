/* You are given an integer array prices where prices[i] is the price of NeetCoin on the ith day.

You may choose a single day to buy one NeetCoin and choose a different day in the future to sell it.

Return the maximum profit you can achieve. You may choose to not make any transactions, in which 
case the profit would be 0. */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int maxProfit = 0;

        while (sell < prices.size()){
            if (prices[buy] < prices[sell]){
                int profit = prices[sell] - prices[buy];
                maxProfit = max(profit, maxProfit);
            } else {
                buy = sell;
            }
            sell++;
        }
        return maxProfit;
    }
};
