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
        ListNode* revL1 = reverseList(l1);
        ListNode* revL2 = reverseList(l2);
        cout << revL1->val << ' ' << revL2->val;
        ListNode* newHead = new ListNode();
        ListNode* ptr = newHead;
        int carry = 0;
        while(revL1 != NULL || revL2 != NULL) {
            int sum = 0;
            sum += carry;
            if(revL1 != NULL ) {
                sum += revL1->val;
                revL1 = revL1->next;
            }
            if(revL2 != NULL ) {
                sum += revL2->val;
                revL2 = revL2->next;
            }
            carry = sum/10;
            ptr->next = new ListNode(sum %10);
            ptr = ptr->next;
        }
        if(carry != 0 ) {
            ptr->next = new ListNode(carry);
        }
        return reverseList(newHead->next);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* cur = head;
        ListNode* link = NULL;
        while(cur != NULL) {
            link = cur->next;
            cur->next = pre;
            pre = cur;
            cur = link;
        }
        return pre;
    } 
    
};