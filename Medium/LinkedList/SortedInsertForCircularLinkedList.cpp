/* structure for a node */
/*
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};
 */
 
// This function should return head of
// the modified list
class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
       Node* newNode = new Node(data);
       if(head == NULL) {
           newNode->next = newNode;
           return newNode;
       }
       
       Node* dummy = NULL;
       Node* temp = head;
       Node* tail = NULL;
       
       while(temp->next != head) {
           if(temp->data <= data && temp->next->data > data) {
               dummy = temp->next;
               temp->next = newNode;
               newNode->next = dummy;
               return head;
           }
           temp = temp->next;
       }
       
       temp->next = newNode;
       newNode->next = head;
       
       if(data < head->data) head = newNode;
       
       return head;
    }
};
