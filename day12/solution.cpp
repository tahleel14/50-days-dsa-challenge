// 🚀 Day 12 – Array Problem: Find the Minimum and Maximum in an Array
// 🧑‍💻 Problem: Minimum & Maximum Element in an Array
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int n = arr.size();
        
        int mn = arr[0];
        int mx = arr[0];
        
        for (int i = 1; i < n; i++) {
            if (arr[i] < mn) 
                mn = arr[i];
            if (arr[i] > mx) 
                mx = arr[i];
        }
        
        return {mn, mx};
    }
};
