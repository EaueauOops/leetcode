/*
 * @lc app=leetcode.cn id=283 lang=java
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
    public void moveZeroes(int[] nums) {
        int n = nums.length;
        int l = 0; int r = 0;
        //l指向处理好的序列尾端，r指向待处理的开端
        while(r<n)
        {
            if(nums[r]!=0)
            {
                swap(nums,l,r);
                l++;
            }
            r++;
        }
    }
        public void swap(int[] nums, int l, int r) {
            int t = nums[l];
            nums[l] = nums[r];
            nums[r] = t;
        }
    
}
// @lc code=end

