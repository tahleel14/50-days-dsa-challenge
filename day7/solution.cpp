// Day 7 – Binary Search
// Problem: Binary Search
// GFG Link: https://www.geeksforgeeks.org/problems/binary-search-1587115620/1
class Solution {
public:
    int binarysearch(vector<int> &arr, int k) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == k) {
                ans = mid;        
                high = mid - 1;   
            }
            else if (arr[mid] < k) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
