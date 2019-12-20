/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
       string a ="1";
       int count;
       for(int i=1;i<n;i++)
       {
           string tmp;
           for(int j=0;j<a.size();j++)
           {
              count = 1;
              while(j+1<a.size()&&a[j+1]==a[j])
                 {count++;j++;}
              tmp+=to_string(count)+a[j];
           }
           a=tmp;
       }
       return a;
    }
};
// @lc code=end

