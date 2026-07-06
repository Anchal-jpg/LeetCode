/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        else if(p==root|| q==root) 
        return root;
        
        TreeNode* leftH=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightH=lowestCommonAncestor(root->right,p,q);

        if(leftH==NULL && rightH!=NULL) return rightH;
        else if(rightH==NULL && leftH!=NULL) return leftH;
        else if(rightH==NULL && leftH==NULL) return NULL;
        return root;

        
        


        

    }
};