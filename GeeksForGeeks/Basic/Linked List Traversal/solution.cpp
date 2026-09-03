/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
*/

class Solution {
  public:
    void printList(Node* head) {
        // code here
        while(head !=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
};