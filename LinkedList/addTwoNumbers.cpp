/* You are given two non-empty linked lists, l1 and l2, where each represents a non-negative integer.

The digits are stored in reverse order, e.g. the number 123 is represented as 3 -> 2 -> 1 -> in the linked list.

Each of the nodes contains a single digit. You may assume the two numbers do not contain any leading zero, except the 
number 0 itself.

Return the sum of the two numbers as a linked list. */

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        while (l1 != nullptr && l2 != nullptr){
            int nextVal = l1->val + l2->val + carry;
            carry = 0;
            if (nextVal > 9){
                nextVal -= 10;
                carry = 1;
            }
            curr->next = new ListNode(nextVal);
            curr = curr->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1){
            int nextVal = l1->val + carry;
            carry = 0;
            if (nextVal > 9){
                nextVal -= 10;
                carry = 1;
            }
            curr->next = new ListNode(nextVal);
            curr = curr->next;
            l1 = l1->next;
        } 
        while (l2){
            int nextVal = l2->val + carry;
            carry = 0;
            if (nextVal > 9){
                nextVal -= 10;
                carry = 1;
            }
            curr->next = new ListNode(nextVal);
            curr = curr->next;
            l2 = l2->next;
        }
        if (carry){
            curr->next = new ListNode(1);
        }
        return dummy->next;
    }
};