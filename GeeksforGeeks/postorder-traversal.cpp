

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void traversing(vector<int> &vecs, Node* temp){
    if(!temp) return;
    traversing(vecs, temp->left);
    traversing(vecs, temp->right);
    vecs.push_back(temp->data);
}

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> vecs;
  Node* temp = root;
  traversing(vecs,temp);
  return vecs;
}
