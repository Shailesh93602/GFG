//User function template for C++

/* 

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

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        head = prev;
        Node* temp = head;
        bool flag = false;
        prev = temp;
        while(temp) {
            prev = temp;
            if(temp->data == 9) {
                temp->data = 0;
            }
            else {
                temp->data += 1;
                flag = true;
                break;
            }
            temp = temp->next;
        }
        if(!flag) {
            prev->next = new Node(1);
        }
        
        curr = head;
        prev = NULL;
        next = NULL;
        
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        head = prev;
        
        return head;
    }
};
