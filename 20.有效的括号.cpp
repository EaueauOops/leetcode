/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2) return false;
        stack<char> st;
        char t;
        bool flag = false;
        for(char a:s)
        {
            if(a=='('||a=='['||a=='{')
            st.push(a);
            if(a==')') 
            {
                flag = true;
                if(st.empty()||st.top()!='(') return false;
                else st.pop();
            }
            if(a==']') 
            {
                flag = true;
                if(st.empty()||st.top()!='[') return false;
                st.pop();
            }
            if(a=='}') 
            {
                flag = true;
                if(st.empty()||st.top()!='{') return false;
                st.pop();
            }
        }
        if(flag && st.empty()) return true;
        else return false;
    }
};
// @lc code=end

