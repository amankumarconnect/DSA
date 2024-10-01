class Solution {
  public:
    // Function to find the maximum element from array a[] and
    // the minimum element from array b[] and return their product.
    long long find_multiplication(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int max = INT_MIN, min = INT_MAX;
        for(int i: arr1){
            if(i>max) max = i;
        }
        for(int i: arr2){
            if(i<min) min = i;
        }
        return max*min;
    }
};
