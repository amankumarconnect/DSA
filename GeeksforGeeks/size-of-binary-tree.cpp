/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

int traverse(Node* node){
    if(!node) return 0;
    return traverse(node->left)+traverse(node->right)+1;
}

class Solution {
  public:
    int getSize(Node* node) {
        // code here
        return traverse(node);
    }
};
