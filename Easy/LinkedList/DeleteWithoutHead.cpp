/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       // Your code here
       Node* prev = del_node;
       while(del_node->next != NULL) {
           del_node->data = del_node->next->data;
           prev = del_node;
           del_node = del_node->next;
       }
       prev->next = NULL;
    }

};
