class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long a = A;
        long long b = B;
        while(a!=b){
            if(a>b) a-=b;
            else b-=a;
        }
        return {A*B/a,a};
    }
};
