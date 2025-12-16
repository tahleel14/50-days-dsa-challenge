// 🚀 Day 17 – Strings Basics | 50 Days DSA Challenge

// 🧑‍💻 Problem: Longest Common Prefix
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
           sort(arr.begin(), arr.end());
        string a = arr[0], b = arr[arr.size()-1];
        int i = 0;
        while (i < a.size() && a[i] == b[i]) i++;
        return a.substr(0, i);
    }
};
