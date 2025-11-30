// Day 2 
// Problem : find the second largest ?
//Link :https://www.geeksforgeeks.org/problems/second-largest3735/1
//Platform : Geek for geeks 
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
         int largest = -1 ; 
      int secondlargest= -1; 
      for (int num : arr ) { 
        if (num > largest ) { 
          secondlargest = largest ; 
          largest = num ;
        } 
       
      else if  ( num< largest && num > secondlargest ) {
        secondlargest = num ; 
      } 
      }
      return secondlargest; 
      
        
    }
};
        
        
