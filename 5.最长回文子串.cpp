/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<int>> dp(n,vector<int> n);
        int i,j,begin,curLen;
        int maxLen = 0;

        for(i=0;i<n;i++)
            dp[i][i] = 1;

        for(j=1;j<n;j++)
        {
            for(i=0;i<n;i++)
            {
                if(s[i]!=s[j])
                    dp[i][j] = 0;
                else
                {
                    if(j-i+1<=3)
                        dp[i][j] = 1;
                    else 
                        dp[i][j] = dp[i+1][j-1];
                }

                if(curLen>maxLen && dp[i][j])
                {
                    maxLen = curLen;
                    begin = i;
                }
            }
        }
        string res = s.substr(begin,maxLen);
        return res;
    }
};
// @lc code=end

