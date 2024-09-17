/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to check if two linked lists are identical
    bool areIdentical(struct Node *head1, struct Node *head2) {
        // code here
        Node* link1 = head1;
        Node* link2 = head2;
        
        while(link1&&link2){
            if(link1->data != link2->data) return false;
            link1 = link1->next;
            link2 = link2->next;
        }
        return true;
    }
};
