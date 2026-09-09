/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) {
        // Count nodes to size the vector up front
        int size = 0;
        Node* temp = head;
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        // Allocate vector with fixed size and fill by index
        vector<int> result(size);
        Node* curr = head;
        for (int i = 0; i < size; i++) {
            result[i] = curr->data;
            curr = curr->next;
        }

        return result;
    }
};