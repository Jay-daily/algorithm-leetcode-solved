//thanks to https://leetcode.com/problems/increasing-order-search-tree/discuss/958108/C%2B%2B-Inorder-Traversal-O(N)-easy-to-understand


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
    
    void inorder(TreeNode* &tmp,TreeNode* root){
        if(!root) return;
        inorder(tmp, root->left);
        tmp->right = new TreeNode(root->val);
        tmp = tmp->right;
        inorder(tmp, root->right);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode*res;
        TreeNode*tmp = new TreeNode;
        res = tmp;
        inorder(tmp,root);
        return res->right;
    }
};

