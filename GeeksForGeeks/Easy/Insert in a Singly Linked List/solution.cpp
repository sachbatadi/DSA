/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
}; */

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        // code here
        Node* newNode=new Node(val);
        Node* temp=head;
        Node* prev=nullptr;
        int count=1;
        if(temp==nullptr){
            if(pos==1){
                return newNode;
            }
            else{
                return nullptr;
            }
        }
        if(pos==1){
            newNode->next = head;
            return newNode;
        }
        while(temp!=nullptr){
           count++;
           if(count==pos){
               newNode->next=temp->next;
               temp->next=newNode;
           }
           temp=temp->next;
        }
        return head;
    }
};