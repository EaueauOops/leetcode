/*
 * @lc app=leetcode.cn id=309 lang=cpp
 *
 * [309] 最佳买卖股票时机含冷冻期
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==0) return 0;
        vector<int> buy(n);
        vector<int> sell(n);
        vector<int> cool(n);
        buy[0] = -prices[0];
        sell[0] = 0;
        for(int i =1;i<n;i++)
        {
            sell[i] = max(sell[i-1],buy[i-1]+prices[i]);
            cool[i] = sell[i-1];
            buy[i] = max(cool[i-1]-prices[i],buy[i-1]);
        }
        return sell[n-1];
    }
};
// @lc code=end

