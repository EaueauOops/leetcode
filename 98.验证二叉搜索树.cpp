/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool res = true;
    bool isValidBST(TreeNode* root) {
        dfs(root,LONG_LONG_MAX,LONG_LONG_MIN);
        return res;
    }

    void dfs(TreeNode* r, long long max, long long min)
    {
        if(r == nullptr) return;
        if(r->val >= max || r->val <= min) {res=false;return;}

        dfs(r->left,r->val,min);
        dfs(r->right,max,r->val);
    }
};
// @lc code=end

