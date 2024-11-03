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
    int level;
    int ans;
    void recur(TreeNode* root){
        if(!root){
            return;
        }
        
        recur(root->left);
        level-=1;
        if(level==0){
            ans=root->val;
            return;
        }
        
        recur(root->right);
    }

    int kthSmallest(TreeNode* root, int k) {
        level=k;
        if(!root->left && !root->right){
            return root->val;
        }        
        recur(root);

        return ans;
    }
};