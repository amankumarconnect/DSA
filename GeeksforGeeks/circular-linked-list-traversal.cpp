

//User function Template for C++

/* structure for a node 
struct Node
{
    int data;
    struct Node *next;
}; */

/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
  // code here
  struct Node *temp = head;
  cout<<temp->data<<" ";
  temp = temp->next;
  while(temp!=head){
      cout<<temp->data<<" ";
      temp = temp->next;
  }
}
