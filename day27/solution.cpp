// 🚀 Day 27 – String Permutations (Backtracking)

// 🧑‍💻 Problem: Print all permutations of a given string
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
class Solution {
  public:
    vector<string> findPermutation(string &s) {
        sort(s.begin(), s.end());
        vector<string> ans;

        do {
            ans.push_back(s);
        } while (next_permutation(s.begin(), s.end()));

        return ans;
    }
};
