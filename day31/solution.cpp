// 🚀 Day 31 – Linked List | Insertion at End

// 🧑‍💻 Problem: Linked List Insertion (Insert at End)
// 🔗 GFG Link:
// 👉 https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1
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
    Node *insertAtEnd(Node *head, int x) {
        // Code here

        Node* newNode = new Node(x);
        if (head == NULL) {
            return newNode;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;

        return head;
    }
};
