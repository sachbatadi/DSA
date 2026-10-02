class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;

    MyLinkedList() { head = nullptr; }

    int get(int index) {
        if (index < 0) {
            return -1;
        }

        Node* temp = head;
        int currIndex = 0;

        while (temp != nullptr) {
            if (currIndex == index) {
                return temp->val;
            }

            temp = temp->next;
            currIndex++;
        }

        return -1;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);

        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;

        while (temp != nullptr) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index < 0) {
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;
        int c = 0;

        while (temp != nullptr) {
            if (c == index) {
                Node* newNode = new Node(val);

                newNode->next = temp;
                prev->next = newNode;

                return;
            }

            prev = temp;
            temp = temp->next;
            c++;
        }

        if (c == index) {
            Node* newNode = new Node(val);
            prev->next = newNode;
        }
    }

    void deleteAtIndex(int index) {
        if (head == nullptr || index < 0) {
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;
        int c = 0;

        if (index == 0) {
            head = head->next;
            delete temp;
            return;
        }

        while (temp != nullptr) {
            if (c == index) {
                prev->next = temp->next;
                delete temp;
                return;
            }

            prev = temp;
            temp = temp->next;
            c++;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */