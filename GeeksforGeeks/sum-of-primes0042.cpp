//User function Template for C++

class Solution{
public:

    bool isprime(int N){
        if(N<2) return false;
        for(int i = 2; i<N; i++){
            if(N%i == 0) return false;
        }
        return true;
    }
    
    int primeSum(int N){
        // code here
        int sum = 0;
        while(N){
            if(isprime(N%10)) sum+= (N%10);
            N/=10;
        }
        return sum;
    }
};
