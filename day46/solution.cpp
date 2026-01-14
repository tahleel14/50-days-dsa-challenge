// 🚀 Day 45 – Mirror of a Binary Tree

// 🧑‍💻 Problem: Convert a Binary Tree into its Mirror
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/mirror-tree/1

class Solution {
  public:
    void mirror(Node* root) {
        if (root == NULL) return;

        // Swap left and right children
        Node* temp = root->left;
        root->left = root->right;
        root->right = temp;

        // Recursively mirror subtrees
        mirror(root->left);
        mirror(root->right);
    }
};
