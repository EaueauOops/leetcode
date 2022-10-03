/*
 * @lc app=leetcode.cn id=152 lang=cpp
 *
 * [152] 乘积最大子数组
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        vector<int> Max(n),Min(n);
        Max[0] = Min[0] = nums[0];
        for(int i =1;i<n;i++)
        {
            Min[i] = min(Max[i-1]*nums[i],min(Min[i-1]*nums[i],nums[i]));
            Max[i] = max(Max[i-1]*nums[i],max(Min[i-1]*nums[i],nums[i]));
        }
        return *max_element(Max.begin(),Max.end());
    }
};
// @lc code=end

