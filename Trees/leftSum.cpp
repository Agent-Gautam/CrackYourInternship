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
    int sumOfLeftLeaves(TreeNode* root) {
        int leftsum = 0;
        helper(root->left, leftsum, true);
        helper(root->right, leftsum, false);
        return leftsum;
    }
    void helper(TreeNode* root, int &leftsum, bool isleft) {
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL) {
            if(isleft) leftsum += root->val;
            return;
        }
        helper(root->left, leftsum, true);
        helper(root->right, leftsum , false);
        return;
    }
};