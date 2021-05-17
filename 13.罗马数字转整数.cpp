/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    unordered_map <char,int> R = {
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
    };
    int romanToInt(string s) {
        int n = s.length();
        int res = 0; 
        for(int i = 0; i<n ;i++)
        {
            int val = R[s[i]];
            if(i+1<n && val < R[s[i+1]])
                res = res - val;
            else 
                res += val;
        }
        return res;
    }
};
// @lc code=end

