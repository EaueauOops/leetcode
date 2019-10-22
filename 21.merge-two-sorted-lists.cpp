/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(-1);
        ListNode *pre;
        pre=&dummy;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1->val<=l2->val)
            { 
                pre->next=l1;
                l1=l1->next;
            }
            else
            {
                pre->next=l2;
                l2=l2->next;
            }
            pre=pre->next;
        }
        if(l1==NULL) pre->next=l2;
        else pre->next=l1;
        return dummy.next;
    }
};
// @lc code=end

