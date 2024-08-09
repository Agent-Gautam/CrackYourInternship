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
    ListNode* sortList(ListNode* head) {
        if(head == NULL) return NULL;
        //traverse the list , store the vals in vector
        vector<int> vals;
        ListNode* ptr = head;
        while(ptr != nullptr) {
            vals.push_back(ptr->val);
            ptr = ptr->next;
        }
        sort(vals.begin(), vals.end());
        ListNode* newhead = new ListNode();
        ListNode* newptr = newhead;
        int i = 0;
        while(i < vals.size()) {
            newptr->next = new ListNode();
            newptr->next->val = vals[i];
            newptr = newptr->next;
            i++;
        }
        return newhead->next;
    }
};