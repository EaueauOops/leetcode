/*
 * @lc app=leetcode.cn id=1310 lang=cpp
 *
 * [1310] 子数组异或查询
 */

// @lc code=start
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
       vector<int> res;
       vector<int> Xor;
        Xor.push_back(0);
       for(int i =0;i<arr.size();i++)
       {
           Xor.push_back( Xor[i] ^ arr[i] );
       } 

       for(int i =0;i<queries.size();i++)
       {
           int l = queries[i][0];
           int r = queries[i][1];
           res.push_back(Xor[l]^Xor[r+1]);
       }

       return res;
    }
};
// @lc code=end

