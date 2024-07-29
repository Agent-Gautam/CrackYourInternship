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
    bool isPalindrome(ListNode* head) {
        vector<int> pal;
        ListNode* ptr = head;
        while(ptr != NULL) {
            pal.push_back(ptr->val);
            ptr = ptr->next;
        }
        int i = 0, j = pal.size()-1;
        while(i < j) {
            if(pal[i] != pal[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};