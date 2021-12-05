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

    int maxD(TreeNode* root) {
        if (root == nullptr) return -1;
        else{
            int lDepth = maxD(root->left);
            int rDepth = maxD(root->right);

            if (lDepth > rDepth) return lDepth+1;
            else return rDepth+1;
        }
    }
    
    int maxDepth(TreeNode* root) {
        return maxD(root)+1;
    }
};
