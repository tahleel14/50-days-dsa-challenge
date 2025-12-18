// 🚀 Day 19 – Strings Basics
// 🧑‍💻 Problem: Count Vowels in a String
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/vowel-or-not0831/1

class Solution {
  public:
    string isVowel(char c) {
        c = tolower(c);
        
        if (c == 'a' || c == 'e' || c == 'i' || 
            c == 'o' || c == 'u')
            return "YES";
        
        return "NO";
    }
};
