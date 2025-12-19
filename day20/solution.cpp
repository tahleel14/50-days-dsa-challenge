// 🚀 Day 20 – Remove Duplicate Characters from String
// 🧑‍💻 Problem: Remove all duplicates from a string
// 🔗 GFG Link: https://www.geeksforgeeks.org/remove-all-duplicates-from-the-input-string/
class Solution {
  public:
    string removeDuplicates(string s) {
        unordered_set<char> st;
        string ans = "";

        for (char c : s) {
            if (st.find(c) == st.end()) {
                st.insert(c);
                ans += c;
            }
        }
        return ans;
    }
};
