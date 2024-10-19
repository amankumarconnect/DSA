// User function Template for C++

class Solution {
  public:
  
    int fact(int n){
        int ans =1;
        for(int i = 2; i<=n; i++){
            ans*=i;
        }
        return ans;
    }
  
    int isPerfect(int N) {
        // code here
        int temp = N;
        int sum = 0;
        while(temp){
            sum += fact(temp%10);
            temp/=10;
        }
        return sum==N;
    }
};
