/*
 * @lc app=leetcode.cn id=114 lang=cpp
 *
 * [114] 二叉树展开为链表
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
    TreeNode* p = new TreeNode();
    void flatten(TreeNode* root) {
        TreeNode* q = p;
        dfs(root);
        root = q->right;
    }

    void dfs(TreeNode* r)
    {
        if(r == nullptr) return;

        //新建节点存储原左右子节点
        TreeNode* lt = r->left;
        TreeNode* rt = r->right;

        //p树连节点
        p->right = r;
        p->left = nullptr;
        p = p->right;

        //dfs
        dfs(lt);
        dfs(rt);
    }
};
// @lc code=end

