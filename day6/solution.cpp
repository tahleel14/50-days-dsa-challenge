// Day 6 – Linear Search
// Problem: Linear Search
// GFG Link: https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1
// PLatform : Geeks for Geeks 
class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        for ( int i = 0 ; i < arr.size(); i++){ 
        if ( arr[i]== x ){ 
        return i ; 
        }
        }
        
        return -1 ;
        
    } 
};
