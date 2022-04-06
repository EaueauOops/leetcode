/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> path;
        for(int n:nums)
        {
            // cout<<n<<endl;
            backTrack(n,nums,path);
        }
        return res;
    }

    void backTrack(int n, vector<int> nums, vector<int> path)
    {
        path.push_back(n);
        nums.erase(find(nums.begin(),nums.end(),n));
       if(nums.size()==0) {res.push_back(path);return;}
       else {for(int i:nums)
        {
            backTrack(i,nums,path);
        }
       }
    }

};
// @lc code=end

