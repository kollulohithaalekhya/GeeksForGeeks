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
    Node* deleteNode(Node* head, int x) {
        // code here
       if (x == 1) {
            return head->next;
        } else {
            Node* temp = head;
            Node* t2 = head;
            int count = 1;

            while (t2 != nullptr && count < x) {
                temp = t2;
                t2 = t2->next;
                count++;
            }

            if (t2 != nullptr) {
                temp->next = t2->next;
            }

            return head;
        }

    }
};