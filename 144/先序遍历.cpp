/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().

 */
 void preord(struct TreeNode *root,int *ans,int *size )
 {
     if(root==NULL)
     {
         return;
      }
      ans[(*size)++]=root->val;
      preord(root->left,ans,size);
      preord(root->right,ans,size);
 }
int* preorderTraversal(struct TreeNode* root, int* returnSize){
int *ans=malloc(sizeof(int)*101);
*returnSize=0;
preord(root,ans,returnSize);
return ans;
}