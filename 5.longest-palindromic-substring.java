/*
 * @lc app=leetcode id=5 lang=java
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
    public String longestPalindrome(String s) {
        int slen = s.length();
        boolean[][] p= new boolean[slen][slen];
        //System.out.println(p[0][0]);
        int maxlen = 0;
        String res = "";
        for(int len = 1 ; len <= slen ; len++)
        {
            for(int beg = 0 ; beg < slen ; beg++)
            {
                int end = beg+len-1;
                if(end>=slen) break;
                p[beg][end] =( (len==1||len==2||p[beg+1][end-1])&&(s.charAt(beg)==s.charAt(end)));
                if((len>maxlen)&&p[beg][end])
                {
                    maxlen=len;
                    res = "";
                    res = s.substring(beg, end+1);
                   // maxlen = res.length();
                }
            }
        }
        return res;
    }
}
// @lc code=end

