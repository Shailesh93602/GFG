

 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node* dummy = new Node(-1);
    Node* temp = dummy;
    while(head1 != NULL && head2 != NULL) {
        if(head1->data < head2->data) {
            temp->next = head1;
            temp = temp->next;
            head1 = head1->next;
        }
        else {
            temp->next = head2;
            temp = temp->next;
            head2 = head2->next;
        }
    }
    while(head1 != NULL) {
        temp->next = head1;
        temp = temp->next;
        head1 = head1->next;
    }
    while(head2 != NULL) {
        temp->next = head2;
        temp = temp->next;
        head2 = head2->next;
    }
    return dummy->next;
}  
