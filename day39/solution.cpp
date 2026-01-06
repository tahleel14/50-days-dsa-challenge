// 🚀 Day 39 – Valid Parentheses (Application-Based Problem)

// 🧑‍💻 Problem: Check for Balanced Parentheses
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1

class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;

        for (char ch : s) {
            // If opening bracket, push
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            // If closing bracket
            else {
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // Stack should be empty at the end
        return st.empty();
    }
};
