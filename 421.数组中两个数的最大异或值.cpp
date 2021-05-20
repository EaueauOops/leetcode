/*
 * @lc app=leetcode.cn id=421 lang=cpp
 *
 * [421] 数组中两个数的最大异或值
 */

// @lc code=start
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        // int  m = 0;
        // sort(nums.begin(),nums.end());
        // int n = nums.size();
        // for(int i = n-1;i>=0;i--)
        // {
        //     for(int j = i-1;j>=0;j--)
        //     {
        //         if(nums[i]<=m-nums[j])
        //         break;
                
        //         m = max(m,nums[i]^nums[j]);
        //     }
        // }
        // return m;
        if(nums.size()<=1)
        return 0;
        if(nums.size()==2)
        return nums[0]^nums[1];
        int res = 0;
        sort(nums.begin(),nums.end());

        for(int i = nums.size()-1;i>=0;i--)
        {
            for(int j = i-1;j>=0;j--)
            {
                if(nums[i]<=res-nums[j])
                    break;
                res = max(res,nums[i]^nums[j]);
            }
        }
        return res;
    }
};
// @lc code=end

