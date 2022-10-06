/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if (n <= 2 || nums[0] > 0)
            return {};
        for (int a = 0; a < n - 2; a++)
        {
            if (a > 0 && nums[a] == nums[a - 1])
                continue;
            int c = n - 1;
            int target = -nums[a];
            for (int b = a + 1; b < n - 1; b++)
            {
                if (b > a + 1 && nums[b] == nums[b - 1])
                    continue;
                while (b < c && nums[b] + nums[c] > target)
                    --c;
                if (b == c)
                    break;
                if (nums[b] + nums[c] == target)
                    res.push_back({nums[a], nums[b], nums[c]});
            }
        }
        return res;
    }
};
// @lc code=end
