import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import javax.lang.model.util.ElementScanner6;

/*
 * @lc app=leetcode id=15 lang=java
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        // List<Integer> oneres = new ArrayList<>(); 
        Arrays.sort(nums);
        int len = nums.length;
        if(len<3||nums==null) return res;
        int l,r,curans;
        for(int i=0;i<(len-2);i++)
        {
            if(nums[i]>0) break;
            if((i>0)&&(nums[i]==nums[i-1])) continue;
            l=i+1;
            r=len-1;
            while(l<r)
            {
                curans = nums[i]+nums[l]+nums[r];
                if(curans>0) r--;
                else if(curans==0) 
                {
                    // oneres.add(nums[i]);
                    // oneres.add(nums[l]);
                    // oneres.add(nums[r]);
                    // res.add(oneres);
                    // System.out.println(oneres);
                    res.add(Arrays.asList(nums[i],nums[l],nums[r]));
                    while(l<r && nums[l]==nums[l+1]) l++;
                    while(l<r && nums[r]==nums[r-1]) r--;
                    l++;r--;
                    // oneres.clear();
                }
                else l++;
            }
            
            // else i++;
        }
        return res;
    }
}
// @lc code=end

