// 🚀 Day 48 – Left View of a Binary Tree (Trees | Easy)

// 🧑‍💻 Problem: Print the Left View of a Binary Tree
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1
class Solution {
  public:
    vector<int> leftView(Node *root) {
        vector<int> ans;
        if (root == NULL) return ans;
        
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            int size = q.size();  // number of nodes at current level
            
            for (int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();
                
                // First node of this level is part of left view
                if (i == 0) {
                    ans.push_back(curr->data);
                }
                
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
        }
        
        return ans;
    }
};
