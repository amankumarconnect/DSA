/*structure of a node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        // Code here
        Node* temp = *head;
        int count = 0;
        while(temp){
            count++;
            temp = temp->next;
        }
        if(count&1) return false;
        else return true;
    }
};
