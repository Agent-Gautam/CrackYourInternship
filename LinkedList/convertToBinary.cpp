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
    int getDecimalValue(ListNode* head) {
        vector<int> binary;
        ListNode* ptr = head;
        while(ptr != NULL) {
            binary.push_back(ptr->val);
            ptr = ptr->next;
        }
        int n = binary.size()-1;
        cout << n ;
        int i = 0;
        int bin = 0;
        while(n >= 0) {
            if(binary[i] == 0) {
                n--;
                i++;
                continue;
            }
            bin += pow(2,n);
            n--;
            i++;
        }
        return bin;
    }
};