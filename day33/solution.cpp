// 🚀 Day 33 – Reverse a Linked List
// 🧑‍💻 Problem: Reverse a Linked List
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1
class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
          Node *curr = head, *prev = nullptr, *next;

    while (curr != nullptr) {


        next = curr->next;

        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
    
};
