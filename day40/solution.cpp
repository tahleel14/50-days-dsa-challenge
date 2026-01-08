// 🚀 Day 40 – Tree Basics (Easy Start)

// 🧑‍💻 Problem: Level Order Traversal of a Binary Tree
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/level-order-traversal/1

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> ans;
        if (root == NULL) return ans;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();

                level.push_back(curr->data);

                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
