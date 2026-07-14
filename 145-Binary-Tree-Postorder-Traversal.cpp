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
    void post(TreeNode* root,vector<int>& trav){
        if (root==nullptr){
            return;
        }
        post(root->left,trav);
        post(root->right,trav);
        trav.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>trav;
        post(root,trav);
        return trav;
    }
};