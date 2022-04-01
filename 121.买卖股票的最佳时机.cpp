/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int minPrice = INT_MAX;

        for(int p :prices)
        {
            if(p<minPrice) {
                minPrice = p;
            }
            else if((p-minPrice)>maxPro)
                maxPro = (p-minPrice);
        }
        return maxPro;
    }
};
// @lc code=end

