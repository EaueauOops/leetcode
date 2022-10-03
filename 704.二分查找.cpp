/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        // if(nums.size()==1&&nums[0]==target) return 0;
        int low = 0;
        int high = nums.size()-1;
        while(low<=high)
        {
            int t = low+(high-low)/2;
            if(nums[t]==target)
            {
                return t;
            }
            else if(nums[t]<target)
            {
                low = t+1;
            }
            else
            {
                high = t-1;
            }
        }
        return -1;
    }
};
// @lc code=end

