//day1: Largest element in the array 
//problem link : https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0
//platform :Geeks for Geeks 
// User function template for C++
class Solution {
  public:
    int largest(vector<int> &arr) {
        int max = arr[0]; 
        for ( int i = 0 ; i< n ; i++){ 
            if ( arr[i ]> max ){ 
                max = arr [i]; 
            } 
        } 
        return max ; 
        
        
    }
};
