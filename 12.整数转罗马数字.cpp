/*
 * @lc app=leetcode.cn id=12 lang=cpp
 *
 * [12] 整数转罗马数字
 */

// @lc code=start
    const pair<string,int> r[] = {
       {"M",1000},{"CM",900},{"D",500},{"CD",400},{"C",100},{"XC",90},{"L",50},{"XL",40},{"X",10},{"IX",9},{"V",5},{"IV",4},{"I",1}
   };

class Solution {

public:
  
    string intToRoman(int num) {
        string res;
        while(num)
        {
           for(int i = 0;i < 13; i++ )
           {
               if(num / r[i].second)
               {
                   res = res + r[i].first;
                   num -=  r[i].second;
                   break;
               }
           }  
        }
        return res;
    }
};
// @lc code=end

