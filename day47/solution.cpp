// 🚀 Day 47 – Sum of Nodes in a Binary Tree

// 🧑‍💻 Problem: Find the sum of all nodes in a Binary Tree
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1
class Solution {
  public:
    int sumBT(Node* root) {
        if (root == NULL) return 0;
        
        return root->data 
               + sumBT(root->left) 
               + sumBT(root->right);
    }
};
