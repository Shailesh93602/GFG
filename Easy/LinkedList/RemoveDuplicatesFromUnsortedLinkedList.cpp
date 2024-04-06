/*
The structure of linked list is the following

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
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int, int> map;
     map[head->data]++;
     Node* temp = head;
     while(head->next) {
        if(map.find(head->next->data) == map.end()) {
            map[head->next->data]++;
            head = head->next;
        }
        else {
            Node* todelete = head->next;
            head->next = head->next->next;
            delete(todelete);
        }
     }
     return temp;
    }
};
