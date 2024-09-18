class Solution {
  public:
    int countSquares(int N) {
        // code here
        float r = sqrt(N);
        if((int)r==r){
            return r-1;
        }
        return (int)r;
    }
};
