// 🚀 Day 23 – Fibonacci Number (Recursion)

// 🧑‍💻 Problem: Nth Fibonacci Number
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1
class Solution {
public:
    int nthFibonacci(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};
