/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return head;
        ListNode dummy(0);
        ListNode *pre = &dummy;
        ListNode *a,*b;
        dummy.next = head;
        a=head;
        b=head->next;
        while(a!=NULL&&b!=NULL)
        {
            pre->next=b;
            a->next=b->next;
            b->next=a;
            pre=a;
            a=a->next;
            if(a!=NULL)
            b=a->next;
            else 
            break;
        }
        return dummy.next;
    }
};
// @lc code=end

