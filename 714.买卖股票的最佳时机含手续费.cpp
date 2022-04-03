/*
 * @lc app=leetcode.cn id=714 lang=cpp
 *
 * [714] 买卖股票的最佳时机含手续费
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        if(n==0) return 0;
        vector<int> buy(n);
        vector<int> sell(n);
        buy[0] = -prices[0];
        sell[0] = 0;

        for(int i =1;i<n;i++)
        {
            buy[i] = max(buy[i-1],sell[i-1]-prices[i]);
            sell[i] = max(buy[i]+prices[i]-fee,sell[i-1]);
        }

        return sell[n-1];
        
    }
};
// @lc code=end

