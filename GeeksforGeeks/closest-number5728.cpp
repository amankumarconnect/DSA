class Solution {
  public:
    int closestNumber(int N , int M) {
        // code here
        int divide = round(N/float(M));
        return divide*M;
    }
};
