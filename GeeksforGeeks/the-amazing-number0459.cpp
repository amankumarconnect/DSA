// User function Template for C++
class Solution {
  public:
    long long isAmazing(long long n){
        // code here
        int count = 0;
        for(long long i = 1; i<=n; i++){
            if(n%i==0) count++;
            if(count>3) return 0;
        }
        return (count==3)? 1 : 0;
    }
};
