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

    int dfs( TreeNode* node){
        if(!node){
            return 0;
        }
        int l= dfs(node->left);
        int r= dfs(node->right);

        return l+r+1;
    }

    int countNodes(TreeNode* root) {
        if(!root){
            return 0;
        }      

        return dfs(root);
    }
};