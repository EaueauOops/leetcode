/*
 * @lc app=leetcode.cn id=207 lang=cpp
 *
 * [207] 课程表
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> grid;
    vector<int> visited;
    bool res = true;
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        grid.resize(numCourses);
        visited.resize(numCourses);

        for(const auto& info:prerequisites)
        {
            grid[info[0]].push_back(info[1]);
        }
        for(int i =0;i<numCourses && res;i++)
        {
            //状态为【未搜索】的节点才进入
            if(visited[i] == 0) dfs(i);  
        }  
        return res;
    }

    void dfs(int u)
    {
        if(res==false) return;
        //节点状态为【未搜索】
        if(visited[u] == 0)
        {
            visited[u] = 1;
            for(int i=0;i<grid[u].size();i++)
            {
                dfs(grid[u][i]);
            }
            visited[u] = 2;
        }
        //节点状态为【搜索中】
        else if(visited[u] == 1) {res=false;return;}
        //节点状态为【已完成】
        else return;
    }
};
// @lc code=end

