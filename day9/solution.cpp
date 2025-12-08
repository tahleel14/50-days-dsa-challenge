// Day 9 – Count the Frequency of Elements
// Arrays – Easy Problem (GeeksforGeeks)
// Problem: Count the Frequency of Elements
// GFG Link: https://www.geeksforgeeks.org/problems/frequency-of-array-elements/1
class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            arr[i]--;
        }
    
        for (int i = 0; i < n; i++) {
            int index = arr[i] % n;
            arr[index] += n;
        }
        
        vector<int> freq(n);
        for (int i = 0; i < n; i++) {
            freq[i] = arr[i] / n;
        }
        
        return freq;
    }
    
};
