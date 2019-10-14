import java.util.HashSet;
import java.util.Set;

import javax.xml.stream.events.Characters;

/*
 * @lc app=leetcode id=3 lang=java
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> set = new HashSet<>();
        int n = s.length();
        int ans = 0,i=0,j=0;
        while(i<n&&j<n)
        {
            if(!set.contains(s.charAt(j))){
                set.add(s.charAt(j++));
                ans=Math.max(ans, j-i);
            }
            else{
                set.remove(s.charAt(i++));
            }
        }
        return ans;
    }
}
// @lc code=end

