/*
 * @lc app=leetcode.cn id=188 lang=cpp
 *
 * [188] 买卖股票的最佳时机 IV
 */

// @lc code=start
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if(n==0||k==0) return 0;
        vector<int> buy(k+1);
        vector<int> sell(k+1);

        //初始化第1天（下标0）1-k次操作的状态
        //buy的收益一定是-p[i]，sell相当于一次买卖0收益
        //边界k=0时，相当于没操作，buysell都默认0
        for(int i = 1;i<=k ;i++)
        {
            buy[i] = -prices[0];
            sell[i] = 0;
        }
        
        //从第2天开始做，转移方程只涉及到i-1天，不用储存之前的状态
        for(int i =1;i<n;i++)
        {
            //
            for(int j = 1;j<=k;j++ )
            {
                buy[j] = max(sell[j-1]-prices[i],buy[j]);
                sell[j] = max(sell[j],buy[j]+prices[i]);
            }
        }
        return sell[k];
    }
};
// @lc code=end

