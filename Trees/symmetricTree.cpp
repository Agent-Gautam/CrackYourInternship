class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        vector<int> inorder;
        helper(root, inorder);
        int i = 0, j = inorder.size()-1;
        while(i < j) {
            if(inorder[i] != inorder[j]) return false;
            i++;
            j--;
        }
        return true;
    }
private: 
    void helper(TreeNode* root, vector<int>& inorder) {
        if(root == NULL) {
            inorder.push_back(-1);
            return ;
        }
        helper(root->left, inorder);
        inorder.push_back(root->val);
        helper(root->right, inorder);
    }
};