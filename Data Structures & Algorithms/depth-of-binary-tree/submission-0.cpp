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
    void maxDep(TreeNode* root, int depth, int& ans) {
        if (root == nullptr) return;
        // int mx=INT_MIN;
        // ans=ans+1;
        ans = max(ans, depth);
        maxDep(root->left, depth + 1, ans);
        maxDep(root->right, depth + 1, ans);
    }
    int maxDepth(TreeNode* root) {
        int ans = 0;
        if (!root) return 0;
        maxDep(root, 1, ans);
        return ans;
    }
};
