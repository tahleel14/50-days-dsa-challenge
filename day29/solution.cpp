// 🚀 Day 29 – Linked List Basics | Display Linked List

// 🧑‍💻 Problem: Display linked list
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/print-linked-list-elements/1
class Solution {
  public:
    vector<int> nodesToArray(struct Node *head) {
        vector<int> ans;
        
        Node* curr = head;
        while (curr != NULL) {
            ans.push_back(curr->data);
            curr = curr->next;
        }
        
        return ans;
    }
};
