

/*Structure of the node of the binary tree
struct Node
{
	int key;
	Node* left, *right;
};
*/
// Function should return the sum of all the elements
// of the binary tree
long int sumBT(Node* root)
{
    // Code here
    if(!root) return 0;
    return sumBT(root->left)+sumBT(root->right)+root->key;
}
