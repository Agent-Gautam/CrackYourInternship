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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        ListNode* newlist = new ListNode;
        ListNode* newptr = newlist;
        while(ptr1 != NULL && ptr2 != NULL) {
            newptr->next = new ListNode;
            if(ptr1->val == ptr2->val) {
                newptr->next->val = ptr1->val;
                newptr = newptr->next;
                newptr->next = new ListNode;
                newptr->next->val = ptr2->val;
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            else if(ptr1->val < ptr2->val) {
                newptr->next->val = ptr1->val;
                ptr1 = ptr1->next;
            }
            else {
                newptr->next->val = ptr2->val;
                ptr2 = ptr2->next;
            }
            newptr = newptr->next;
        }
        while(ptr1 != NULL) {
            newptr->next = new ListNode;
            newptr->next->val = ptr1->val;
            newptr = newptr->next;
            ptr1 = ptr1->next;
        }
        while(ptr2 != NULL) {
            newptr->next = new ListNode;
            newptr->next->val = ptr2->val;
            newptr = newptr->next;
            ptr2 = ptr2->next;
        }

        return newlist->next;
    }
};