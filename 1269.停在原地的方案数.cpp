/*
 * @lc app=leetcode.cn id=1269 lang=cpp
 *
 * [1269] 停在原地的方案数
 */

// @lc code=start
class Solution {
public:
    int numWays(int steps, int arrLen) {
        int res = 0 ;
        int maxcolumn = min(arrLen-1,steps);
        vector<vector<int>> dp(steps+1,vector<int>(maxcolumn+1));
        int M = 1000000007;
        dp[0][0] = 1;
        for(int i =1 ;i<=steps;i++)
        {
            for(int j = 0;j<=maxcolumn;j++)
            {
                dp[i][j] = dp[i-1][j] % M;
                if(j-1 >= 0)
                dp[i][j] = (dp[i][j]+dp[i-1][j-1])%M;
                if(j+1<=maxcolumn)
                dp[i][j] = (dp[i][j]+dp[i-1][j+1])%M;
            }
        }
        return dp[steps][0];
    }
};
// @lc code=end

