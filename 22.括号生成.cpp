/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        string path;
        dfs(n,0,0,path);
        return res;
    }

    void dfs(int n, int l, int r, string path)
    {
        if(l>n || r>l) return;
        if(path.size() == 2*n) {res.push_back(path);return;}

        dfs(n,l+1,r,path+'(');
        dfs(n,l,r+1,path+')');
    }
};
// @lc code=end

