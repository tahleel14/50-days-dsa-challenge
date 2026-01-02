🚀 Day 34 – Delete a Node in a Linked List
🧑‍💻 Problem: Delete a Node in Singly Linked List
🔗 GFG Link: https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if (x == 1) {
            return head->next;
        }

        Node* curr = head;

        for (int i = 1; i < x - 1 && curr != NULL; i++) {
            curr = curr->next;
        }
        if (curr != NULL && curr->next != NULL) {
            curr->next = curr->next->next;
        }

        return head;
    }
};
