/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        helper(root, res, "");
        return res;
    }
    void helper(TreeNode* root, vector<string>& res, string cur) {
        if(root == NULL) {
            return;
        }
        string newString = cur + to_string(root->val);
        if(root->left == NULL && root->right == NULL) {
            res.push_back(newString);
            return;
        }
        newString += "->";
        helper(root->left, res, newString);
        helper(root->right, res, newString);
    }
};