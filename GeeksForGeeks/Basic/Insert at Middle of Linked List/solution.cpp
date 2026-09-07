/* Strucutre of a link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // code Here
        Node * newNode = new Node(x);
        if(head == NULL){
            return newNode;
        }
        Node * slow = head;
        Node * fast = head->next;

        while(fast != NULL && fast->next != NULL){
            slow= slow->next;
            fast = fast->next->next;
        }
        newNode->next = slow->next;
        slow->next = newNode;

        return head;
    }
};