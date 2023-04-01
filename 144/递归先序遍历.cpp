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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int>v;
        TreeNode *cur=root;
        while(cur||!st.empty())
        {
            while(cur)//1.左路节点
            {
                v.push_back(cur->val);
                st.push(cur);
                cur=cur->left;
            }
            TreeNode *top=st.top();
            st.pop();
            cur=top->right;//访问右子树
        }
        return v;
    }
};
