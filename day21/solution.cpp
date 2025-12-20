// 🚀 Day 21 – First Non-Repeating Character in a String

// 🧑‍💻 Problem: First non-repeating character
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/non-repeating-character-1587115620/1
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        int freq[26] = {0};

        // Count frequency of each character
        for (char c : s) {
            freq[c - 'a']++;
        }

        // Find first non-repeating character
        for (char c : s) {
            if (freq[c - 'a'] == 1) {
                return c;
            }
        }

        // If no non-repeating character exists
        return '$';
    }
};
