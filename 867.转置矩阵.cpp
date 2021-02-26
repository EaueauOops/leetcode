/*
 * @lc app=leetcode.cn id=867 lang=cpp
 *
 * [867] 转置矩阵
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int col = matrix.size();
        int row = matrix[0].size();
        
        vector<vector<int>> NewMatrix (row,vector<int>(col));
        for (int i = 0; i < col ; i++)
        {
            for (int j = 0 ; j < row ; j++)
            {
                NewMatrix[j][i] = matrix[i][j];
            }
        }
        return NewMatrix;
    }
};
// @lc code=end

