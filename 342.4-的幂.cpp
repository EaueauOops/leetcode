/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n>0&&(n&(n-1))==0&&(n&0xAAAAAAAA)==0)
        return true;
        else return false;
    }
};
// @lc code=end

