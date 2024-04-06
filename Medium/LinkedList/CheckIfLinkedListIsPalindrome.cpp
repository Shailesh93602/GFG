/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    bool checkPalindrome(string str) {
        for(int i=0; i<str.length(); i++) {
            if(str[i] != str[str.length()-i-1]) return false;
        }
        return true;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        string str = "";
        Node* temp = head;
        while(temp != NULL) {
            str += temp->data;
            temp = temp->next;
        }
        return checkPalindrome(str);
    }
};
