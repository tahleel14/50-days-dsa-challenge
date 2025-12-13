// 🚀 Day 14 – Easy Array Problem

// 🧑‍💻 Problem: Missing Number in Array
// // 🔗 GFG Link: https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long n = arr.size() + 1;
        long long total = n * (n + 1) / 2;
        long long sum = 0;

        for (int x : arr) {
            sum += x;
        }

        return (int)(total - sum);
    }
};

