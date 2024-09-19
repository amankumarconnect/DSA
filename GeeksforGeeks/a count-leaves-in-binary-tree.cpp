

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */

void traverse(Node* temp, int &count){
    if(!temp) return;
    if(!(temp->left)&&!(temp->right)) count++;
    traverse(temp->left,count);
    traverse(temp->right,count);
}

int countLeaves(Node* root)
{
  // Your code here
  int count = 0;
  Node* temp = root;
  traverse(temp, count);
  return count;
}
