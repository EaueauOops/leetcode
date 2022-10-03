/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* p = new ListNode();

    void dfs(ListNode* head, ListNode* pre)
    {
        if(head == nullptr) {return;}
        p= head;
        head = head->next;
        p->next = pre;
        pre = p;
        // p = head;
        dfs(head,pre);
    }

    ListNode* reverseList(ListNode* head) {
        if(head==nullptr) return head;
        p = head;
        ListNode* last = head;
        dfs(head->next,head);
        last->next = nullptr;
        return p;
    }
};
// @lc code=end

