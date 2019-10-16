/*
 * @lc app=leetcode id=11 lang=java
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
    public int maxArea(int[] height) {
        int len=height.length;
        int maxArea=0,l=0,r=len-1;
        int high,width,curarea;
        while(l<len&&r>l)
        {
            high=Math.min(height[l], height[r]);
            width=r-l;
            curarea=width*high;
            maxArea=maxArea>curarea?maxArea:curarea;
            if(height[l]<= height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return maxArea;
    }
}
// @lc code=end

