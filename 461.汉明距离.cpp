/*
 * @lc app=leetcode.cn id=461 lang=cpp
 *
 * [461] 汉明距离
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y;
        int res = 0;
        for(int i =0;i<31;i++)
        {
            res += (n>>i) & 1;
        }
        return res;
    }
};
// @lc code=end

