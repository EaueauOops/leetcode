/*
 * @lc app=leetcode.cn id=437 lang=cpp
 *
 * [437] 路径总和 III
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
    // int  count = 0;
    int pathSum(TreeNode* root, int targetSum)
    {
        return dfsRoot(root,targetSum);
    }

    int dfsLen(TreeNode* root, int t)
    {
        if(root == nullptr) return 0;

        // cout<<"dfsLen"<<root->val<<endl;
        int count = 0;
        if(root->val == t) count++;
        
       
        count += dfsLen(root->left,t-root->val);
        count += dfsLen(root->right,t-root->val);
        return count;
    }

    int dfsRoot(TreeNode* root,int t)
    {
        if(root==nullptr) return 0;
        // cout<<"dfsRoot"<<root->val<<endl;
        int count = 0;
        count += dfsLen(root,t);
        
        count+= dfsRoot(root->left,t);
        count+= dfsRoot(root->right,t);

        return count;
    }
};
// @lc code=end

