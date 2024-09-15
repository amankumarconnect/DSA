// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i = n-1; i>0; i--){
            swap(arr[i],arr[i-1]);
        }
    }
};
