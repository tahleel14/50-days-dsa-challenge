// 🚀 Day 35 – Find the Middle of a Linked List

// 🧑‍💻 Problem: Finding the Middle Element in a Linked List
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;        
            fast = fast->next->next; 
        }

        return slow->data;
    }
};
