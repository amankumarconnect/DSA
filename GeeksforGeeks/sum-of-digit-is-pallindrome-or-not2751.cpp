// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int sum = 0;
        while(n){
            sum+= n%10;
            n/=10;
        }
        int temp = sum;
        int rev = 0;
        while(temp){
            rev = rev*10 + (temp%10);
            temp/=10;
        }
        return rev==sum ? 1:0;
    }
};
