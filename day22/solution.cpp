//🚀 Day 22 – Factorial Using Recursion

//🧑‍💻 Problem: Factorial of a Number (Recursion)
//🔗 GFG Link:
//https://www.geeksforgeeks.org/problems/factorial5739/1
class Solution {
  public:
    int factorial(int n) {
        int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
};
