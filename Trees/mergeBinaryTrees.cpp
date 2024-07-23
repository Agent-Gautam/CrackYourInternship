class Solution {
public:
    TreeNode* mergeTrees(TreeNode*& root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL) return NULL;
        TreeNode* newRoot;
        makeTree(newRoot, root1, root2);
        return newRoot;
    }
    void makeTree(TreeNode*& newRoot, TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL) return;
        newRoot = new TreeNode();
        if(root1 != NULL && root2 == NULL) {
            newRoot->val += root1->val;
            makeTree(newRoot->left, root1->left, NULL);
            makeTree(newRoot->right, root1->right, NULL);
            return;
        }
        else if(root1 == NULL && root2 != NULL) {
            newRoot->val += root2->val;
            makeTree(newRoot->left, NULL, root2->left);
            makeTree(newRoot->right, NULL, root2->right);
            return;
        }
        else {
            newRoot->val += root1->val + root2->val;
            makeTree(newRoot->left, root1->left, root2->left);
            makeTree(newRoot->right, root1->right, root2->right);
        }
        return;
    }
};