/* Structure of doubly linked list Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/
class Solution {
  public:
    vector<vector<int>> displayList(Node *head) {
        vector<int> forward;
        vector<int> backward;

        if (!head) return {forward, backward};

        Node *curr = head;
        Node *last = nullptr;

        // Forward traversal
        while (curr != nullptr) {
            forward.push_back(curr->data);
            last = curr;
            curr = curr->next;
        }

        // Backward traversal using the last node reference
        curr = last;
        while (curr != nullptr) {
            backward.push_back(curr->data);
            curr = curr->prev;
        }

        return {forward, backward};
    }
};