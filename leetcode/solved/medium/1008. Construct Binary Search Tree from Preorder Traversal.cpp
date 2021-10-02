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
    
    TreeNode* newNode(int x){
        TreeNode* tmp = new TreeNode(x);
        return tmp;
    }
    
    TreeNode* insert(TreeNode* root, int x){
        if(root==nullptr){
            return newNode(x);
        }
        
        if(root->val > x){
            root->left = insert(root->left,x);
        }
        else
            root->right = insert(root->right,x);
        
        return root;
    }
    
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = nullptr;
        for(auto value : preorder){
            root = insert(root,value);
        }
        return root;
    }
        
};



