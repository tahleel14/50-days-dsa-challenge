// 🚀 Day 24 – Sum of Digits (Recursion)

// 🧑‍💻 Problem: Sum of Digits
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/sum-of-digits1742/1
class Solution {
  public:
    int sumOfDigits(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
};
