/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution {
public:
    vector<int> res {-1,-1};
    vector<int> searchRange(vector<int>& nums, int target) {
        //二分
        
        int n = nums.size();
        if(n==1&&nums[0]==target) {res[0]=res[1]=0;return res;}
        if(n==1&&nums[0]!=target) return res;
        int l = 0;
        int r = n-1;
        while(l<r)
        {
            int m = l+(r-l)/2;
            cout<<"m"<<m<<endl;
            if(nums[m]<target)
            {
                l = m+1;
            }
            else if(nums[m]>target)
            {
                r = m-1;
            } 
            else 
            {
                // 前面还有t
                if(m>0&&nums[m-1]==target)
                {
                    findFirst(l,r,target,m,nums);
                }else if(m==0||nums[m-1]<target)
                {
                    res[0] = m;
                }
                
                //后面还有t
                if(m+1<n&&nums[m+1]==target)
                {
                    findLast(l,r,target,m,nums);
                }else if (m==n-1||nums[m+1]>target)
                {
                    res[1] = m;
                }
                break;
            }
        }
        if(l==r && nums[l]==target)
        {
            res[0]=res[1]=l;
        }
        return res;
    }

    void findFirst(int l, int r, int target, int m, vector<int> nums)
    {
        while(l<r)
        {
            // 前面还有t
            if(nums[m-1]==target)
            {
                l = m-1;
                r = m;
            }
            //找到第一个t了
            else if(nums[m-1]<target)
            {
                res[0] = m;
                return;
            }
            m = l+(r-l)/2;
            if(m==0) {res[0]=m;return;}
        }
        return;
    }

    void findLast(int l, int r, int target, int m, vector<int> nums)
    {
        while(l<r)
        {
            if(nums[m+1]==target)
            {
                l = m;
                r = m+1;
            }
            //找到最后一个t了
            else if(nums[m+1]>target){
                res[1] = m;
                return;
            }
            m = l+(r-l)/2+1;
            if(m==nums.size()-1) {res[1]=m;return;}
        }
        return;
    }
};
// @lc code=end

