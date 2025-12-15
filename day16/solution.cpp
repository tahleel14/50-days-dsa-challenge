// 🚀 Day 16 – Check Palindrome String

// 🧑‍💻 Problem: Check Palindrome
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/palindrome-string0817/1
class Solution {
  public:
    bool isPalindrome(string& s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
