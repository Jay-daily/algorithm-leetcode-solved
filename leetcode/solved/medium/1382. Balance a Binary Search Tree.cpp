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
    vector<TreeNode*>inorder;
    
    void saveNode(TreeNode* root){
        if(!root)
            return;
        saveNode(root->left);
        inorder.push_back(root);
        saveNode(root->right);
    }
    
    TreeNode* rematch(int start,int end){
        if(start>end){
            return NULL;
        }
        int mid = (start+end)/2;
        TreeNode*root = inorder[mid];
        root->left = rematch(start,mid-1);
        root->right = rematch(mid+1,end);
        return root;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL)
            return root;
        saveNode(root);
        root = rematch(0, inorder.size()-1);
        
        return root;
    }
};
