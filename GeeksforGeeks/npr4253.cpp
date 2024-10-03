// User function Template for C++

class Solution{
public:
    
    long long facto(int n){
        long long fac = 1;
        for(int i = 2; i<=n; i++){
            fac*=i;
        }
        return fac;
    }
    
    long long nPr(int n, int r){
        // code here
        return (long long) facto(n)/facto(n-r);
    }
};
