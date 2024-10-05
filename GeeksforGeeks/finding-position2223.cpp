// User function Template for C++
class Solution {
  public:
    long long int nthPosition(long long int n){
        // code here
        int ans = (int) log2(n);
        return pow(2,ans);
    }
};
