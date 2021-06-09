/*
 * @lc app=leetcode.cn id=494 lang=cpp
 *
 * [494] 目标和
 */

// @lc code=start
class Solution {
public:
    int dfs(vector<int>& nums,int i ,int target,int res)
    {
        if(i==nums.size()) return res==target?1:0;
        int left = dfs(nums,i+1,target,res+nums[i]);
        int right = dfs(nums,i+1,target,res-nums[i]);
        return left + right;
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        return dfs(nums,0,target,0);
    }
};
// @lc code=end

