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
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

        int max=0;
        int maxidx=0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]>max) {max =nums[i]; maxidx = i;}
        }
        TreeNode* root = new TreeNode(max);
        
        if(maxidx!=0){
            vector <int>v;
            for(int i =0; i<maxidx; i++) v.push_back(nums[i]);
            root->left = constructMaximumBinaryTree(v);
        }
        if(maxidx!=nums.size()-1){
            vector <int>v;
            for(int i =maxidx+1; i<nums.size(); i++) v.push_back(nums[i]);
            root->right = constructMaximumBinaryTree(v);
        }
        return root;
    }
};
