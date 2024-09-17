/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        Node* temp = root;
        vector<int> vecs;
        traversing(vecs, temp);
        return vecs;
    }
    
    void traversing(vector<int> &vecs, Node* temp){
        if(!temp) return;
        traversing(vecs, temp->left);
        vecs.push_back(temp->data);
        traversing(vecs,temp->right);
    }
};
