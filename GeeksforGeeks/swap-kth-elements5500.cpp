
class Solution {
  public:
    void swapKth(int k, vector<int> &arr) {
        // code here
        swap(arr[k-1],arr[arr.size()-k]);
    }
};
