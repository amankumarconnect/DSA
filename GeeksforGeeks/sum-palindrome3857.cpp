// User function Template for C++
class Solution {
  public:
    
    long long reverse(long long n){
        long long rev = 0;
        while(n){
                rev= rev*10 + n%10;
                n/=10;
        }
        return rev;
    }
    
    long long isSumPalindrome(long long n) {
        // code here
        for(int i =0; i<6; i++){
            if(n==reverse(n)) return n;
            n = n+reverse(n);
        }
        return -1;
    }
};
