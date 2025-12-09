// 🚀 Day 10 – Prime Number Check (Easy Problem)

// 🧑‍💻 Problem: Check Whether a Number is Prime
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/prime-number2314/1
class Solution {
  public:
    bool isPrime(int n) {
        if (n <= 1) return false;   // 0, 1, negatives are not prime
        if (n == 2 || n == 3) return true;  // 2 and 3 are prime
        if (n % 2 == 0) return false;  // even numbers > 2 are not prime

        // check only odd divisors from 3 to sqrt(n)
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0)
                return false;     // found a divisor → not prime
        }
        
        return true; // no divisors → prime
    }
};
