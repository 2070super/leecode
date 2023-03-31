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
    bool find(TreeNode *sub,TreeNode *x)
    {
        if(sub==nullptr)
        {
            return false;
        }
        if(sub==x)
        {
            return true;
        }
        return find(sub->left,x)||find(sub->right,x);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr)
            return nullptr;
        if(root==p||root==q)
        {
            return root;
        }
        bool pinleft,pinright,qinleft,qinright;
        pinleft=find(root->left,p);
        pinright=!pinleft;
        qinleft=find(root->left,q);
        qinright=!qinleft;
        if((pinleft&&qinright)||(qinleft&&pinright))
        {
            return root;
        }
        else if(pinleft&&qinleft)
        {
            return lowestCommonAncestor(root->left,p,q);
        }
        else if(pinright&&qinright)
        {
            return lowestCommonAncestor(root->right,p,q);
        }
        else
        {
            return nullptr;
        }
    }
};
