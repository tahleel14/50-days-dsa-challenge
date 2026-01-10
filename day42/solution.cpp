// 🚀 Day 42 – Check if a Binary Tree is a BST

// 🧑‍💻 Problem: Check for Binary Search Tree (BST)
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/check-for-bst/1
class Solution {
  public:
    bool check(Node* root, long long minVal, long long maxVal) {
        if (!root) return true;

        if (root->data <= minVal || root->data >= maxVal)
            return false;

        return check(root->left, minVal, root->data) &&
               check(root->right, root->data, maxVal);
    }

    bool isBST(Node* root) {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
};
