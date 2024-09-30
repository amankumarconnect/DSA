//  Function to multiply the sum of first half of the array with the sum of second half
//  of the array
class Solution {
  public:
    int multiply(vector<int> &arr) {
        // code here
        int n = arr.size()/2;
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i<n; i++){
            sum1 += arr[i];
        }
        for(int i = n; i<arr.size(); i++){
            sum2 += arr[i];
        }
        return sum1*sum2;
    }
};
