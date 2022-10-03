/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1);
        // dp[0] = 0;
        int t = 0;
        for(int i =1; i<=n; i++)
        {
            if((i&(i-1)) == 0)
            //2的整数幂-1以后与它本身完全相反
            {
                t = i;
            }
            dp[i] = dp[i-t] + 1;
        }
        return dp;
    }
};
// @lc code=end

