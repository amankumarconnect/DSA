//User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

*/
vector<int> displayList(Node *head)
{
    vector<int> vecs;
    if(!head) return vecs;
    vecs.push_back(head->data);
    Node* temp = head->next;
    while(temp!=NULL){
        vecs.push_back(temp->data);
        temp = temp->next;
    }
    return vecs;
    
    
}
