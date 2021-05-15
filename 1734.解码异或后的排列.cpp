/*
 * @lc app=leetcode.cn id=1734 lang=cpp
 *
 * [1734] 解码异或后的排列
 */

// @lc code=start
class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
       int all = 0;
       int odd = 0;
       vector<int> res;
        int n = encoded.size()+1;
       for(int i =1  ; i<=n ; i++)
       { 
           all = all ^ i;
           if(i%2!=0&&i!=n)
           odd = odd ^ encoded[i]; 
       }
        res.push_back(odd^all);
        for(int i = 0;i<n-1;i++)
        {
            res.push_back(encoded[i]^res[i]);
        }
        return res;


    }
};
// @lc code=end

