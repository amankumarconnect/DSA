class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
        int first = 0, last = n-1;
        while(first<last){
            if(arr[first]>arr[last]) first++;
            else last--;
        }
        return arr[first];
    }
};
