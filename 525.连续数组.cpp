/*
 * @lc app=leetcode.cn id=525 lang=cpp
 *
 * [525] 连续数组
 */

// @lc code=start
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int r = 0;
        unordered_map<int,int>mp;
        mp[0] = -1;
        int Max = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]==0) nums[i] = -1;
            r += nums[i];
            if(mp.count(r))
            {
                Max=max(i-mp[r],Max);
            }
            else
            {
                mp[r] = i;
            }
        }
        return Max;
    }
};
// @lc code=end

