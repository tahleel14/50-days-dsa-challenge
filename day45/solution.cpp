// ✅ Day 45 – Postorder Traversal of a Binary Tree (Easy)

// 🧑‍💻 Problem: Postorder Traversal
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/postorder-traversal/1
class Solution {
  public:
    void helper(Node* root, vector<int>& ans) {
        if (root == NULL) return;
        
        helper(root->left, ans);    // Left
        helper(root->right, ans);   // Right
        ans.push_back(root->data);  // Root
    }
    
    vector<int> postOrder(Node* root) {
        vector<int> ans;
        helper(root, ans);
        return ans;
    }
};
