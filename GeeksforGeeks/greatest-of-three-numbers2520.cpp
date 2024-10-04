// User function Template for C++

class Solution {
  public:
    int greatestOfThree(int A, int B, int C) {
        // code here
        int ans = max(A,B);
        return max(ans,C);
    }
};
