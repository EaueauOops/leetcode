/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0) ;
        dummy.next = head;
        ListNode *p = head;
        // cout<<head->val<<endl;
        int len = 0;
        while(p!=NULL)
        {
            len++;
            p=p->next;
        }
        cout<<len;
        if(len==1){
            return NULL;
        }
        int target = len-n;
        p=&dummy;
        ListNode *q;
        int c = 0;
        while(c!=target)
        {
            p=p->next;
            c++;
        }
        q=(p->next)->next;
        p->next = q;
        return dummy.next;
        
    }
};
// @lc code=end

