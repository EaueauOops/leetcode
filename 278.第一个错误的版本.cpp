/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n;
        int t;
        while(l<r)
        {
            t = (r-l)/2+l;
            if(isBadVersion(t)) r=t;
            else l = t+1;
        }
        return l;
    }
};
// @lc code=end

