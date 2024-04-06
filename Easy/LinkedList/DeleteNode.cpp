

/* Link list Node 
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

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x == 1) {
        return head->next;
    }
    Node* temp = head;
    x--;
    while(--x) {
        temp = temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete(toDelete);
    return head;
}
