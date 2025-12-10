// 🚀 Day 11 – Check if Array Is Palindrome

// 🧑‍💻 Problem: Check if Array is Palindromic
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/palindromic-array-1587115620/1
class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        for(int num : arr) {
            if(!isPalindrome(num)) {
                return false; 
            }
        }
        return true;  
    }
    bool isPalindrome(int n) {
        int original = n, rev = 0;
        
        while(n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }
        
        return rev == original;
    }
};

       
