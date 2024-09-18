// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        long long sum = (n*n*(n+1)*(n+1)/4);
        return sum;
    }
};
