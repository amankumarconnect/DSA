// User function template for C++

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> vecs;
        for(int i = 1; i<=n; i++){
            if(arr[i-1]==i){
                vecs.push_back(i);
            }
        }
        return vecs;
    }
};
