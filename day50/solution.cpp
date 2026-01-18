// 🚀 Day 50 – Longest Consecutive Subsequence (Array | Challenging)

// 🧑‍💻 Problem: Longest Consecutive Subsequence
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        if (arr.empty()) return 0;
        
        unordered_set<int> st(arr.begin(), arr.end());
        int longest = 0;
        
        for (int x : st) {
            // Check if x is the start of a sequence
            if (st.find(x - 1) == st.end()) {
                int curr = x;
                int len = 1;
                
                while (st.find(curr + 1) != st.end()) {
                    curr++;
                    len++;
                }
                
                longest = max(longest, len);
            }
        }
        
        return longest;
    }
};
