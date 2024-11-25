class Solution {
  public:
    int findIndex(vector<int>& arr, int x) {
        // code
        for(int i = arr.size()-1; i>=0; i--){
            if(arr[i]==x) return i+1;
        }
        return -1;
    }
};
