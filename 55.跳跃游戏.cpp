/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int t;
        int maxDistance = 0;
        for(int i=0; i<=maxDistance; i++)
        {
            t = nums[i]+i;
            maxDistance = maxDistance<t?t:maxDistance;
            if(maxDistance>=nums.size()-1) return true;
        }
        return false;
    }
};
// @lc code=end

