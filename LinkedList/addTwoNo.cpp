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
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        int sum = 0, carry = 0;
        ListNode* newHead = new ListNode();
        ListNode* newptr = newHead;
        while(ptr1 != nullptr || ptr2 != nullptr) {
            if(ptr1 != nullptr) {
                sum += ptr1->val;
                ptr1 = ptr1->next;
            }
            if(ptr2 != nullptr){
                sum += ptr2->val;
                ptr2 = ptr2->next;
            }
            sum += carry;
            carry = sum / 10;
            newptr->next = new ListNode(sum%10);
            newptr = newptr->next;
            sum = 0;
        }
        if(carry != 0 ) {
            newptr->next = new ListNode(carry);
        }
        return newHead->next;
    }
};