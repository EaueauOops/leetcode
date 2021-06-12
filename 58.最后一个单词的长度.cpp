/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        int n = s.length();
        bool flag = false;
        for(int i = n-1;i>=0;i--)
        {
            if(s[i]!=' ') {++res;flag=true;}
            else if(s[i]==' '&&flag==true) break;
        }
        return res;
    }
};
// @lc code=end

