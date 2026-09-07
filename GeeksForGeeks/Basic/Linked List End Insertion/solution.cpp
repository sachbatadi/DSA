/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node *newNode = new Node(x);

        // If the list is empty, the new node becomes the head
        if (head == NULL) {
            return newNode;
        }

        // Traverse to the last node
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Point the last node's next to the new node
        temp->next = newNode;

        return head;
    }
};