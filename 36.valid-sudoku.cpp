/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9]={0},col[9][9]={0},mat[9][9]={0};
        int num;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    num = board[i][j]-'0'-1;
                    row[i][num]++;
                    if(row[i][num]==2) return false;
                    col[j][num]++;
                    if(col[j][num]==2) return false;
                    mat[3*(i/3)+(j/3)][num]++;
                    if(mat[3*(i/3)+(j/3)][num]==2) return false;
                }
            }
        }
    return true;
    }
};
// @lc code=end

