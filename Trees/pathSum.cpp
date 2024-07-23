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
    bool hasPathSum(TreeNode* root, int& targetSum, int curSum = 0) {
        if(root == NULL) return false;
        if(root->left == NULL && root->right == NULL) {
            if(curSum + root->val == targetSum) return true;
            else return false;
        }
        return hasPathSum(root->left, targetSum, curSum + root->val) || hasPathSum(root->right, targetSum, curSum + root->val);
    }
};