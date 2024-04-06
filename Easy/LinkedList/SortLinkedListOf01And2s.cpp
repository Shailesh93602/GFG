/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int len = 0;
        int count0 = 0;
        int count1 = 0;
        Node* temp = head;
        while(temp != NULL) {
            len++;
            if(temp->data == 0) count0++;
            else if(temp->data == 1) count1++;
            len++;
            temp = temp->next;
        }
        temp = head;
        while(temp != NULL) {
            if(count0 > 0) {
                temp->data = 0;
                temp = temp->next;
                count0--;
            }
            else if(count1 > 0) {
                temp->data = 1;
                temp = temp->next;
                count1--;
            }
            else {
                temp->data = 2;
                temp = temp->next;
            }
        }
        return head;
    }
};
