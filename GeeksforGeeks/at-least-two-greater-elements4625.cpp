class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        // Your code goes here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<int> vecs;
        for(int i = 0; i<n-2;i++){
            vecs.push_back(arr[i]);
        }
        return vecs;
    }
};
