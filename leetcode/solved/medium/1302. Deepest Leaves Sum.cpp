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
    int get_depth(TreeNode* root){
        //add 1 till reach to the leaf node
        if(!root) return 0;
        return 1 + max(get_depth(root->left), get_depth(root->right));
        
    }
    int get_sum(TreeNode* root, int depth){
        //do nothing till reach to the leaf node
        if (!root) return 0;
        if (depth == 1) return root->val;
        return get_sum(root->left, depth-1) + get_sum(root->right, depth-1);
    }
    int deepestLeavesSum(TreeNode* root) {
        int depth = get_depth(root);
        int sum = get_sum(root, depth);
        return sum;
    }
};
