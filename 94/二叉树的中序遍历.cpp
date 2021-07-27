void inorder(struct TreeNode* root,int *ret,int *Size)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,ret,Size);
    ret[(*Size)++]=root->val;
    inorder(root->right,ret,Size);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize){
int*p=malloc(sizeof(int)*101);
*returnSize=0;
inorder(root,p,returnSize);
return p;
}
