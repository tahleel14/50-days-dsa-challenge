// 🚀 Day 26 – Print Numbers from 1 to N (Recursion)

// 🧑‍💻 Problem: Print numbers from 1 to N using recursion
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1
class Solution {
  public:
    void printTillN(int n) {
        // Base case
        if (n == 0)
            return;

        // Recursive call
        printTillN(n - 1);

        // Print after recursion
        cout << n << " ";
    }
};
