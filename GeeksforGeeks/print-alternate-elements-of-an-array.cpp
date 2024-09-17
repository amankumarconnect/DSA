// User function Template for C++

class Solution {
  public:
    // arr[] is the array
    void print(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        for(int i = 0; i<n; i+=2){
            cout<<arr[i]<<" ";
        }
    }
};
