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

 void traversing(vector<int> &vecs, TreeNode* temp){
    if(!temp) return;
    vecs.push_back(temp->val);
    traversing(vecs, temp->left);
    traversing(vecs, temp->right);
 }
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vecs;
        TreeNode* temp = root;
        traversing(vecs, temp);
        return vecs;
    }
};
