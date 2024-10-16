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
    vector<int> postorderTraversal(TreeNode* root) {
        TreeNode* temp = root;
        vector<int> vecs;
        traversing(vecs,temp);
        return vecs;
    }

    void traversing(vector<int> &vecs, TreeNode* temp){
        if(!temp) return;
        traversing(vecs, temp->left);
        traversing(vecs, temp->right);
        vecs.push_back(temp->val);
    }
};
