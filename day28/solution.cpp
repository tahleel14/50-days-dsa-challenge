// 🚀 Day 28 – Count Nodes in a Linked List

// 🧑‍💻 Problem: Count Nodes of a Linked List
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
class Solution {
  public:
    int getCount(struct Node* head) {
        int count = 0;
        Node* temp = head;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        return count;
    }
};

