/*
 * @lc app=leetcode id=12 lang=java
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution {
    public String intToRoman(int num) {
        int[] n = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        String[] r = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int index = 0;
        StringBuffer res = new StringBuffer();
        while(num!=0)
        {
            while(num>=n[index])
            {
                res.append(r[index]);
                num-=n[index];
            }
            index++;   
        }
        return res.toString();
    }
}
// @lc code=end

