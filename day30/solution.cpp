// 🚀 Day 30 – Linked List Basics (DSA in C++)

// 🧑‍💻 Problem: Find Length of a Linked List (Even or Odd)
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1
bool isLengthEven(struct Node **head) {
    int count = 0;
    Node* temp = *head;

    while (temp) {
        count++;
        temp = temp->next;
    }

    return count % 2 == 0;
}
