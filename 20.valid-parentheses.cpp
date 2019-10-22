/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st ;
        map<char,char> m = {{')','('},{'}','{'},{']','['}};
        if(s[0]==')'||s[0]=='}'||s[0]==']')
        return false;
        // s.push(s[0]);
        char t;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty()) return false;
                t=st.top();
                st.pop();
                map<char,char>::iterator ite;
                ite = m.find(s[i]);
                //cout<<ite->second<<endl;
                if(ite->second != t)
                 return false;
            }      
        }
        if(!st.empty()) return false;
        else return true;
    }
};
// @lc code=end

