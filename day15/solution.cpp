// 🚀 Day 15 – Strings Basics
// 🧑‍💻 Problem: Reverse a String
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/reverse-a-string/1
class Solution {
  public:
    string reverseString(string& s) {
        // code here
         vector<char> v(s.begin(), s.end());
        int left = 0 ; int right =v.size()-1;
        while(left <right ){
            swap(v[left],v[right]);
            left++;
            right--;
        }
        return string(v.begin(), v.end());
    }
};
