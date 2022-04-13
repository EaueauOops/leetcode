/*
 * @lc app=leetcode.cn id=48 lang=java
 *
 * [48] 旋转图像
 */

// @lc code=start
class Solution {
    public void rotate(int[][] matrix) {
        int n = matrix.length;
        //水平对折
        for(int i = 0; i < n/2 ; i++)
        {
            for(int j = 0; j < n ; j++)
            {
                int t = matrix[n-1-i][j];
                matrix[n-1-i][j] = matrix[i][j];
                matrix[i][j] = t;  
            }
        }

        //主对角线翻折
        for(int i = 0; i < n ; i++)
        {
            for(int j =0; j<i; j++)
            {
                int t = matrix[j][i];
                matrix[j][i] = matrix[i][j];
                matrix[i][j] = t;
            }
        }
    }
}
// @lc code=end

