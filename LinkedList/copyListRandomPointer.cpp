/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> mp = {};
        return helper(head, mp);
    }
    Node* helper(Node* head, unordered_map<Node*, Node*> &mp) {
        if(head == NULL) return NULL;
        if(mp.find(head) != mp.end()) return mp[head];
        Node* newNode = new Node(head->val);
        mp[head] = newNode;
        newNode->next = helper(head->next, mp);
        newNode->random = helper(head->random, mp);
        return newNode;
    }
};