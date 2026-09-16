/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class myStack {
  private:
    Node *head;
    int count;

  public:
    myStack() {
        head = NULL;
        count = 0;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void push(int x) {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        count++;
    }

    void pop() {
        if (isEmpty()) return;

        Node *temp = head;
        head = head->next;
        delete temp;
        count--;
    }

    int peek() {
        if (isEmpty()) return -1;
        return head->data;
    }

    int size() {
        return count;
    }
};