// 🚀 Day 18 – Strings Practice

// 🧑‍💻 Problem: Valid Anagram
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/anagram-1587115620/1
class Solution {
public:
    bool isAnagram(string s1, string s2) {
        if (s1.length() != s2.length())
            return false;

        int freq[26] = {0};

        // Count frequency of characters in s1
        for (char c : s1)
            freq[c - 'a']++;

        // Decrease frequency using s2
        for (char c : s2)
            freq[c - 'a']--;

        // Check if all frequencies are zero
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                return false;
        }

        return true;
    }
};
