class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr) {
            return head;
        }

        int totalLength = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            totalLength++;
            curr = curr->next;
        }

        int targetIndex = totalLength - n + 1;

        if (targetIndex == 1) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        int count = 0;
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while (temp != nullptr) {
            count++;
            if (count == targetIndex) {
                prev->next = temp->next;
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
        }

        return head;
    }
};