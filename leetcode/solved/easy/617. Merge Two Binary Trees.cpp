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
 *This is one of the submissions from other people.
 *uploaded for the purpose of my studying cuz it's too new for me now at the moment.
 
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* t3;
        if(!t1 && !t2) return nullptr;

        t3 = new TreeNode(0);
        if(t1) t3->val+=t1->val;
        if(t2) t3->val+=t2->val;
        
        if(t1 && !t2){
            t3 -> left = mergeTrees(t1->left,t2);
            t3 -> right = mergeTrees(t1->right,t2);
        }
        if(t1 && t2){
            t3 -> left = mergeTrees(t1->left,t2->left);
            t3 -> right = mergeTrees(t1->right,t2->right);
        }
        if(!t1 && t2){
            t3 -> left = mergeTrees(t1,t2->left);
            t3 -> right = mergeTrees(t1,t2->right);
        }
        return t3;
    }
};
