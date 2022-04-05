/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution {
public:
    vector<string> res;
    unordered_map<char,string> M = {
           {'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}
       };

    vector<string> letterCombinations(string digits) {
       if(digits=="") return res;
       backTrack(digits,0,"");
       return res;

    }

    void backTrack(string digits, int current, string s)
    {
        if(current==digits.size()) {
            res.push_back(s);
            return;
        }
        char c = digits[current];
        int n = M[c].size();
        for(int i =0;i<n;i++)
        {
            backTrack(digits,current+1,s+M[c][i]);
        }
    }
};
// @lc code=end

