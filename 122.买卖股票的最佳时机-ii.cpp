/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp0,dp1;
        dp0=0;
        dp1=-prices[0];
        for(int i=1;i<prices.size();i++)
        {
            int t0 = dp0; int t1 = dp1;
            dp0 = max(t1+prices[i],t0);
            dp1 = max(t0-prices[i],t1);
        }
        return dp0;
    }
};
// @lc code=end

