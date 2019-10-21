/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int len = digits.length();
        map<char,string> num = { {'2',"abc" },{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"} };
        queue<string> q ;
        vector<string> res;
        for(int i=0;i<num[digits[0]].size();i++)
        {
            string s;
            s+=num[digits[0]][i];
            q.push(s);
        }
        for(int i = 1;i<digits.length();i++)
        {
        int qlen = q.size();
        while(qlen--)
        {
            string s;
            s=q.front();
            q.pop();
            for(int j=0;j<num[digits[i]].size();j++)
            {
                string t;
                t=s+num[digits[i]][j];
                q.push(t);
            }
        }
        }   
        while(!q.empty())
        {
            string s;
            s=q.front();
            q.pop();
            res.push_back(s);
        }
        return res;
        //return "";
    }
};
// @lc code=end

