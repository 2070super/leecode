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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>>vv;
        size_t levelsize=0;
        if(root)
        {
            q.push(root);
            levelsize=1;
        }
        while(!q.empty())
        {
            vector<int> v;
            for(int i=0;i<levelsize;i++)
            {
                TreeNode *front=q.front();
                q.pop();
                v.push_back(front->val);
                if(front->left)
                {
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                }
            }
            vv.push_back(v);
            levelsize=q.size();

        }
        return vv;
    }
};