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
private:
    int res = 0;
    int DFS(TreeNode *root)
    {
        if (!root)
        {
            return -1;
        }

        int left = DFS(root->left);
        int right = DFS(root->right);

        res = res > left + right + 2 ? res : left + right + 2;

        return max(left, right) + 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) 
    {
        DFS(root);
        return res;    
    }
};
