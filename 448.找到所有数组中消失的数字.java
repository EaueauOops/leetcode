/*
 * @lc app=leetcode.cn id=448 lang=java
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        HashSet <Integer> H = new HashSet <Integer> ();
        int n = nums.length;
        for(int i = 1; i<=n;i++)
        {
            H.add(i);
        }
        for(int i =0;i<n;i++)
        {
            if(H.contains(nums[i]))
            H.remove(nums[i]);
        }
        List <Integer> res = new ArrayList <Integer> (H);
        return res;
    }
}
// @lc code=end

