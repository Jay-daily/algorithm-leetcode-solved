//spend 7hours to understand. (still not fully understood..)
//this is not my own-created code.
//thanks to https://leetcode.com/problems/all-possible-full-binary-trees/discuss/1221826/C%2B%2B-Easy-Recursive-No-Extra-Function-Needed-(With-Explanation)

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
    
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*>res;
        if(n==1){
            TreeNode* root = new TreeNode();
            res.push_back(root);
            return res;
        }
        for(int i=1; i<=n-2; i+=2){
            vector<TreeNode*>left = allPossibleFBT(i);
            vector<TreeNode*>right = allPossibleFBT(n-1-i);
            for(int j=0; j<left.size();++j){
                for(int k=0; k<right.size();++k){
                    TreeNode* root = new TreeNode();
                    root->left = left[j];
                    root->right = right[k];
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};




 





