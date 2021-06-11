/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> sum(n+1);
        sum[0] = 0;
        int res = nums[0];
        for(int i = 1;i<=n;i++)
        {
           sum[i] = sum[i-1] + nums[i-1];
           for(int j = 0;j<i;j++)
           {
               res = max(res, sum[i]-sum[j]);
           }    
        }
        return res;
    }
};
// @lc code=end

