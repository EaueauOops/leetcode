import java.util.ArrayList;
import java.util.List;

/*
 * @lc app=leetcode id=6 lang=java
 *
 * [6] ZigZag Conversion
 */

// @lc code=start
class Solution {
    public String convert(String s, int numRows) {
        if(numRows == 1) return s;
        int count=0,row=0,flag=1;
        List<StringBuilder> m = new ArrayList<StringBuilder>();
        for(int i = 0; i < numRows; i++) m.add(new StringBuilder());
        while(count<s.length())
        {
            //System.out.println(s.charAt(count));
            m.get(row).append(s.charAt(count));
            // System.out.println(count);
            // System.out.println(row);
            // System.out.println(count%(numRows-1));
            if(((count%(numRows-1))==0)&&(count!=0))
            {
                flag=-flag;
            }
            row+=flag;
            count++;
        }
        StringBuilder res = new StringBuilder();
        for(StringBuilder b:m)
        {
            //System.out.println(b);
            res.append(b);
        }
        return res.toString();
        // return "";
    }
}
// @lc code=end

