class Solution {
  public:
    // Function to find the minimum value required to balance the array.
    int minValueToBalance(vector<int> &arr) {
        // code here
        int n = arr.size();
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i<n/2; i++){
            sum1+=arr[i];
        }
        for(int i = n/2; i<n; i++){
            sum2+=arr[i];
        }
        return abs(sum1-sum2);
    }
};
