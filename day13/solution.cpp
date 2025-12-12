// 🚀 Day 13 – Bubble Sort

// 🧑‍💻 Problem: Implement Bubble Sort
// 🔗 GFG Link: https://www.geeksforgeeks.org/problems/bubble-sort/1
class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n =arr.size();
        for (int i= 0 ; i < n; i++){ 
            for (int j =0; j<n-i-1; j++){
                if (arr[j]>arr[j+1]){
                    int temp = arr[j]; 
                    arr[j]= arr[j+1];
                    arr[j+1]= temp;
                    
                }
            }
                
            }
    }
};
