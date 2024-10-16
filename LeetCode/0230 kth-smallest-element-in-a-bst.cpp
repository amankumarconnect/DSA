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
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* temp = root;
        vector<int> vecs;
        inorder(vecs, temp);
        return vecs[k-1];
    }

    void inorder(vector<int> &vecs, TreeNode* temp){
        if(!temp) return;
        inorder(vecs, temp->left);
        vecs.push_back(temp->val);
        inorder(vecs, temp->right);
    }
};
