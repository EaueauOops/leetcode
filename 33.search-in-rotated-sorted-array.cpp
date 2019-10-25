/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0, right = len-1;
        while(left<=right)
        {
            int mid = (left+right)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<nums[right])
            {
                if(nums[mid]<target&&nums[right]>=target) left = mid+1;
                else right = mid -1;
            }
            else
            {
                if(nums[mid]>target&&nums[left]<=target) right = mid -1;
                else left = mid+1;
            }
        }
        return -1;
    }
};
// @lc code=end

