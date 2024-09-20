/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
        if(!head) return (new Node(x));
        Node* slow = head;
        Node* fast = head;
        while(fast->next&&fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        Node* temp = slow->next;
        slow->next = new Node(x);
        slow->next->next = temp;
        return head;
    }
};
