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
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
            return NULL;
        ListNode *pre = NULL;
        ListNode *cur = head;
        while (cur != NULL)
        {
            if (cur->val == val)
            {
                if (pre == NULL)
                {
                    head = head->next;
                    cur = head;
                }
                else
                {
                    pre->next = cur->next;
                    cur = cur->next;
                }
            }
            else
            {
                pre = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};