/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int maxSize = 0;
        helper(root, maxSize, 0);
        return maxSize;
    }
    void helper(TreeNode* root, int& maxSize, int curSize = 0) {
        if(root == NULL) {
            if(curSize > maxSize) maxSize = curSize;
            return ;
        }
        helper(root->left, maxSize, curSize + 1);
        helper(root->right, maxSize, curSize + 1);
        return;
    }
};