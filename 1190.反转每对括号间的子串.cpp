/*
 * @lc app=leetcode.cn id=1190 lang=cpp
 *
 * [1190] 反转每对括号间的子串
 */

// @lc code=start
class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string t;
        for(auto& ch:s)
        {
            if(ch=='(')
            {
                st.push(t);
                t="";
            }
            else if(ch == ')')
            {
                reverse(t.begin(),t.end());
                t = st.top() + t;
                st.pop();
            }
            else {
                t += ch;
            }
        }
        return t;
    }
};
// @lc code=end

