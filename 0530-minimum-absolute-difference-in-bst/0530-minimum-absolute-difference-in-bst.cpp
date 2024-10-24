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
 #include<cmath>
#include <cstdlib> // for integer abs()
class Solution {
public:
    int minab= INT_MAX;
    TreeNode* prev= nullptr;

    void recur(TreeNode* root){
        if(root->left)
        {recur(root->left);}
        if(prev)
        minab= std:: min(std::abs(root->val - prev->val), minab);
        prev= root;
        if(root->right)
        {recur(root->right);}
    
    }
    int getMinimumDifference(TreeNode* root) {

        recur(root);
        return minab;
        
    }
};