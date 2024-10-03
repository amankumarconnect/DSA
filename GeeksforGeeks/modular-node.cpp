/*Struture of the node of the linked list is as:

struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
class Solution {
  public:
    int modularNode(Node *head, int k) {
        // Code here
        int count = 1;
        int ans = -1;
        while(head){
            if(count%k==0){
                ans = head->data;
            }
            head = head->next;
            count++;
        }
        return ans;
    }
};
