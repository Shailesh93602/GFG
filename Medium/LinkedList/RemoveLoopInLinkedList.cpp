/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any 
        Node* temp = head;
        vector<int> a;
        int len = 0;
        while(temp->next != NULL) {
            if(temp->next->data == -1) break;
            len++;
            a.push_back(temp->data);
            temp->data = -1;
            temp = temp->next;
        }
        temp = head;
        int i=0;
        while(len--) {
            temp->data = a[i++];
            temp = temp->next;
        }
        temp->next = NULL;
    }
};
