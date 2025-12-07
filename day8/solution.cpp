 Day 8 – Move All Zeroes to the End
 Problem: Move Zeroes to End
 GFG Link: https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int j =0 ; 
        for(int i =0 ; i <arr.size(); i++ ){ 
            if (arr[i]!=0 ){
                arr[j]= arr[i];
                j++;
            }
        }
        while(j<arr.size()){
            arr[j]=0;
            j++;
        }
    }
};
