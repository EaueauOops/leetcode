/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> h;
        int maxlen = 0;
        int j = 0;
        if(s.size()==0) return 0;
        for(int i =0 ; i<s.size(); i++)
        {
            while(h.find(s[i])!=h.end())//有重复
            {
                h.erase(s[j]);
                j++;
            }
            maxlen = max(maxlen,i-j+1);
            h.insert(s[i]);
        }
        return maxlen;

    }
};
// @lc code=end

