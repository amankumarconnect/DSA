// User function template for C++
class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int x) {
        // code here
        int less = 0, great = 0;
        for(int i:arr){
            if(i<=x) less++;
            if(i>=x) great++;
        }
        return {less,great};
    }
};
