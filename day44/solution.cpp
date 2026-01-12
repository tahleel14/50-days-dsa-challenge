// ✅ Day 44 – Inorder Traversal of a Binary Tree (Easy)

// 🧑‍💻 Problem: Inorder Traversal
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/inorder-traversal/1
class Solution {
  public:
    void helper(Node* root, vector<int>& ans) {
        if (root == NULL) return;
        
        helper(root->left, ans);   // Left
        ans.push_back(root->data); // Root
        helper(root->right, ans);  // Right
    }
    
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        helper(root, ans);
        return ans;
    }
};
