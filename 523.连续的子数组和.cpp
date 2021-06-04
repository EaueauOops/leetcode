/*
 * @lc app=leetcode.cn id=523 lang=cpp
 *
 * [523] 连续的子数组和
 */

// @lc code=start
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
      unordered_map<int,int> mp;
      int remainder = 0;
      mp[0] = -1;
      for(int i = 0;i<nums.size();i++)
      {
          remainder = (remainder+nums[i]) % k;
          if(mp.count(remainder))
          {
              if(i-mp[remainder] >= 2) return true;
              
          }
          else { mp[remainder] = i; }
      }
      return false;  
    }
};
// @lc code=end

