// 🚀 Day 49 – Count Non-Leaf Nodes in a Binary Tree

// 🧑‍💻 Problem: Count Non-Leaf Nodes in a Binary Tree
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1
class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        if (root == NULL) return 0;
        
        // If both children are NULL, it's a leaf node
        if (root->left == NULL && root->right == NULL) {
            return 0;
        }
        
        // Current node is non-leaf, count it
        return 1 
               + countNonLeafNodes(root->left) 
               + countNonLeafNodes(root->right);
    }
};
