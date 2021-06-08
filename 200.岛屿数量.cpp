/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j)
    {
        int row = grid.size();
        int col = grid[0].size();
        grid[i][j]='0';
        if(i+1<row && grid[i+1][j]=='1') dfs(grid,i+1,j);
        if(i-1>=0 && grid[i-1][j]=='1') dfs(grid,i-1,j);
        if(j+1<col && grid[i][j+1]=='1') dfs(grid,i,j+1);
        if(j-1>=0 && grid[i][j-1]=='1') dfs(grid,i,j-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
       int row = grid.size();
       int col = grid[0].size();
       int res = 0;
       for(int i = 0;i<row;i++)
       {
           for(int j =0;j<col;j++)
           {
              if(grid[i][j]=='1') {++res;dfs(grid,i,j);}
           }
       } 
       return res;
    }
};
// @lc code=end

