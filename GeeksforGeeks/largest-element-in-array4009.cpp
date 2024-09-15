// User function Template for C++

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int lar = 0;
        for(int i = 0; i<arr.size();i++){
            lar = max(lar,arr[i]);
        }
        return lar;
    }
};
