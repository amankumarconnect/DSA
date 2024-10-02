// User function template for C++

class Solution {
  public:
    int maxDays(vector<int> &arr) {
        // code here
        int max = INT_MIN;
        for(int i:arr){
            if(i>max) max=i;
        }
        return max;
    }
};
