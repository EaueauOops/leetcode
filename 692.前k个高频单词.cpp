/*
 * @lc app=leetcode.cn id=692 lang=cpp
 *
 * [692] 前K个高频单词
 */

// @lc code=start
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> H;
        vector<string> res;
        for(auto& word:words)
        {
            ++H[word];
        }
        for(auto& [key,value]:H)
        {
            res.push_back(key);
        }
        sort(res.begin(),res.end(),[&H](const string a , const string b){
            if(H[a] == H[b]) return a<b;
            else return H[a]>H[b];
        });
        res.erase(res.begin()+k,res.end());
        return res;
    }
};
// @lc code=end

