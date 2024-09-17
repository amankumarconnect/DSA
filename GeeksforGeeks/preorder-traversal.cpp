

/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
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

//Function to return a list containing the preorder traversal of the tree.
void traversePreorder(vector <int> &vecs, Node* temp ){
    if(!temp) return;
    vecs.push_back(temp->data);
    traversePreorder(vecs, temp->left);
    traversePreorder(vecs, temp->right);
}

vector <int> preorder(Node* root)
{
  // Your code here
  Node* temp = root;
  vector<int> vecs;
  traversePreorder(vecs, temp);
  return vecs;
}
