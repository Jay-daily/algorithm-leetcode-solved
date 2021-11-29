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
    
    bool res = true;
    void dfs(TreeNode* p, TreeNode* q){
        if(p==nullptr && q==nullptr) return;
        else if(p==nullptr && q!=nullptr) {
            res = false;
            return;   
        }
        else if(p!=nullptr && q==nullptr) {
            res = false;
            return;   
        }
        dfs(p->left,q->left);
        if(p->val != q->val) res = false; 
        dfs(p->right,q->right);
        return;
    }
    
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        dfs(p,q);
        
        return res;
    }
};
