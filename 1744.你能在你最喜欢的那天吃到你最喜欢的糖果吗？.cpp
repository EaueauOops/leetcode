/*
 * @lc app=leetcode.cn id=1744 lang=cpp
 *
 * [1744] 你能在你最喜欢的那天吃到你最喜欢的糖果吗？
 */

// @lc code=start
class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        vector<bool>ans;
        vector<long long> sum;
        long long t = 0;
        for(int i = 0;i<candiesCount.size();i++)
        {
            t += candiesCount[i];
            sum.push_back(t);
        }
        for(auto& q:queries)
        {
            int ft = q[0];
            int fd = q[1];
            int dc = q[2];
            long long min = (long long)fd+1;
            long long max = (long long)(fd+1) * dc;
            long long c1 = (ft == 0?0:sum[ft-1]);
            long long c2 = sum[ft];
            if((max<=c1)||(min>c2)) ans.push_back(false);
            else ans.push_back(true);
        }
        return ans;
    }
};
// @lc code=end

