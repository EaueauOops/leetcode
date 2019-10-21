/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> v;
        if(nums.size()==4)
        {
            if(nums[0]+nums[1]+nums[2]+nums[3]==target)
            {
                res.push_back(nums);
            } 
            return res;
        }
        if(nums.size()<4) return res;
        int a,b,c,d;
        sort(nums.begin(),nums.end());
        int len = nums.size();
        int cursum;
        for(a = 0; a<len -3 ;a++)
        {
            if(a>0 && nums[a]==nums[a-1] ) continue;
            for( b = a+1; b<len-2;b++)
            {
                if(b>a+1&&nums[b]==nums[b-1]) continue; 
                c=b+1;
                d=len-1;
                //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                while(c<d)
                {
                    cursum = nums[a]+nums[b]+nums[c]+nums[d];
                    if(cursum == target)
                    {
                        v.push_back(nums[a]);v.push_back(nums[b]);v.push_back(nums[c]);v.push_back(nums[d]);
                        res.push_back(v);
                        v.clear();
                        while((c<d) && nums[c+1] == nums[c] ) c++;
                        while((c<d) && nums[d-1] == nums[d] ) d--;
                        c++;d--;
                    }
                    else if(cursum < target)
                    {
                        while((c<d) && nums[c+1] == nums[c] ) c++;
                        c++;
                    }
                    else 
                    {
                        while((c<d) && nums[d-1] == nums[d] ) d--;
                        d--;
                    }
                }
            }
        }
        return res;
    }
};
// @lc code=end

