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
    ListNode* middleNode(ListNode* head) {
        ListNode* middle = head;
        ListNode* cur = head;
        while(cur != nullptr) {
            if(cur->next != nullptr) cur = cur->next->next;
            else break;
            middle = middle->next;
        }
        cout << middle->val;
        return middle;
    }
};