/*
 * @lc app=leetcode.cn id=234 lang=java
 *
 * [234] 回文链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    List <Integer> n = new ArrayList<>();
    public boolean isPalindrome(ListNode head) {
        while(head!=null)
        {
            n.add(head.val);
            head = head.next;
        }
        int i = 0, j = n.size()-1;
        while(i<j)
        {
            if(!n.get(i).equals(n.get(j)))
                return false;
            i++;j--;
        }
        return true;
    }
}
// @lc code=end

