/*
 * @lc app=leetcode.cn id=1738 lang=cpp
 *
 * [1738] 找出第 K 大的异或坐标值
 */

// @lc code=start
class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        vector<int> res;
        for(int i = 0;i< matrix.size();i++)
        {
            for(int j =1;j< matrix[0].size();j++)
            {
                matrix[i][j] = matrix[i][j-1] ^ matrix[i][j];
            }
        }
        for(int i = 1;i< matrix.size();i++)
        {
            for(int j =0;j< matrix[0].size();j++)
            {
                matrix[i][j] = matrix[i][j] ^ matrix[i-1][j];
                // res.push_back(matrix[i][j]);
            }
        }
        for(int i = 0;i< matrix.size();i++)
        {
            for(int j =0;j< matrix[0].size();j++)
            {
                res.push_back(matrix[i][j]);
            }
        }
        sort(res.rbegin(),res.rend());
        // res.erase(res.begin()+k,res.end());
        return res[k-1];
    }
};
// @lc code=end

