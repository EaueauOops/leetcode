import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/*
 * @lc app=leetcode id=16 lang=java
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
    public int threeSumClosest(int[] nums, int target) {
        //List<Integer> res = new ArrayList<>();
        int l,r,cursum,res;
        Arrays.sort(nums);
        res = cursum= nums[0]+nums[1]+nums[nums.length-1];
        for(int i=0;i<nums.length-2;i++)
        {
            if(i>0 && nums[i-1]==nums[i]) continue;
            l=i+1;
            r=nums.length-1;
            while(l<r)
            {
                cursum = nums[i]+nums[l]+nums[r];
                if(target==cursum)
                    return cursum;
                else if(Math.abs(target-cursum)<=Math.abs(target-res))
                {
                    res=cursum;              
                }
                  if(cursum > target)
                {
                    r--;
                    while(l<r && nums[r]==nums[r+1]) r--;
                }
                  else 
                {
                    l++;
                    while(l<r && nums[l]==nums[l-1]) l++;
                }
            }
            
        }
        return res;
    }
}
// @lc code=end

