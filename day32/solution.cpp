// 🚀 Day 32 – Insert in Middle of Linked List
// 🧑‍💻 Problem: Insert in Middle of Linked List
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1?page=1&category=Linked%20List&sortBy=difficulty
// class Solution {
  public:
    Node* insertInMiddle(Node* head, int x) {
        if (head == NULL)
            return new Node(x);

        // Step 1: Find length
        int len = 0;
        Node* temp = head;
        while (temp != NULL) {
            len++;
            temp = temp->next;
        }

        // Step 2: Correct middle index (GFG)
        int steps = (len + 1) / 2 - 1;

        // Step 3: Move to correct node
        Node* curr = head;
        for (int i = 0; i < steps; i++) {
            curr = curr->next;
        }

        // Step 4: Insert
        Node* newNode = new Node(x);
        newNode->next = curr->next;
        curr->next = newNode;

        return head;
    }
};
