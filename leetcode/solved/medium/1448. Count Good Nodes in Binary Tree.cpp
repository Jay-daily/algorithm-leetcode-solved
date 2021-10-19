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
    
    int res =0;

    void preorder(TreeNode*root,int max){
        if(root==nullptr) return;
        
        if(root->val >= max){
            max = root->val;
            res++;
        }

        preorder(root->left,max);
        preorder(root->right,max);
        return;
    }
    
    int goodNodes(TreeNode* root) {
        preorder(root,INT_MIN);
        return res;
    }
};
