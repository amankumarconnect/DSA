class Solution{
public:
    long long int factorial(int N){
        //code here
        long long fac = 1;
        for(int i = 2; i<=N; i++){
            fac*=i;
        }
        return fac;
    }
};
