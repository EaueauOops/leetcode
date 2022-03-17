/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
    int maxLen = 0;
    int maxDepth(TreeNode* root) {
        vector<int> path;
        dfs(root,path);
        return maxLen;
    }

    void dfs(TreeNode* r,  vector<int> path)
    {
        if(r == nullptr) {
            if(path.size()>maxLen) maxLen = path.size();
            return;
        }
        path.push_back(r->val);
        dfs(r->left,path);
        dfs(r->right,path);
    }


};
// @lc code=end

