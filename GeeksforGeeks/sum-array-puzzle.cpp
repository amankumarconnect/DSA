// User function Template for C++

// arr is the array
// n is the number of element in array
class Solution {
  public:

    void sumArray(vector<int> &arr) {
        // Your code goes here
        int sum = 0;
        for(int i:arr) sum+=i;
        for(int i = 0; i<arr.size(); i++){
            arr[i] = sum-arr[i];
        }
    }
};
