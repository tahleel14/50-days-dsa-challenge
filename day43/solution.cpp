// 🚀 Day 43 – Count Leaf Nodes in a Binary Tree

// 🧑‍💻 Problem: Count leaf nodes in a Binary Tree
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // Base case: empty tree
        if (root == NULL) return 0;
        
        // If this node is a leaf
        if (root->left == NULL && root->right == NULL)
            return 1;
        
        // Otherwise, count leaves in both subtrees
        return countLeaves(root->left) + countLeaves(root->right);
    }
};
