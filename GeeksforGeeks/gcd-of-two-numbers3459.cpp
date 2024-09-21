
class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        while(a!=b){
            if(a>b) a-=b;
            else b-=a;
        }
        return a;
    }
};
