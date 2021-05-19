/*
 * @lc app=leetcode.cn id=993 lang=cpp
 *
 * [993] 二叉树的堂兄弟节点
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
    int xdep,ydep,xpar,ypar;
    
    void dp(int dep,int x, int y ,int par,TreeNode* root)
    {
        if(root == nullptr)
        return;
        if(root->val == x)
            {xdep = dep; xpar = par;}
        else if(root->val == y)
            {ydep = dep; ypar = par;}
        else
        {
            dp(dep+1,x,y,root->val,root->left);
            dp(dep+1,x,y,root->val,root->right);

        }
    }
    bool isCousins(TreeNode* root, int x, int y) {
        dp(1,x,y,root->val,root->left);
        dp(1,x,y,root->val,root->right);
        return (xdep==ydep)&&(xpar!=ypar);
    }
};
// @lc code=end

