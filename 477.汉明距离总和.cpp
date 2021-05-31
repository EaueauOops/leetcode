/*
 * @lc app=leetcode.cn id=477 lang=cpp
 *
 * [477] 汉明距离总和
 */

// @lc code=start
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int m = nums.size();
        int res = 0;
        for(int i = 0;i<=30;i++)
        {
            int n = 0;
            for(auto& num:nums)
            {
                n += (num>>i)&1;
            }
            res += (m-n)*n;
        }
        return res;
    }
};
// @lc code=end

