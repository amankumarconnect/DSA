// User function template for C++
class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        // code here
        l--; r--;
        while(l<r){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
        return arr;
    }
};