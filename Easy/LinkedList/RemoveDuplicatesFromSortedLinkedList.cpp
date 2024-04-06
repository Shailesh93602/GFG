

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
    Node* temp = head;
    while(temp != NULL && temp->next != NULL) {
        if(temp->data == temp->next->data) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete(toDelete);
        }
        else {
            temp = temp->next;
        }
    }
    return head;
}
