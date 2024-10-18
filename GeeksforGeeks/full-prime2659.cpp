//User function template for C++

class Solution{
    public:
    
    bool isprime(int n){
        if(n<2) return false;
        for(int i = 2; i<n; i++){
            if(n%i==0) return false;
        }
        return true;
    }
    
	int fullPrime(int N){
	    //code here
	    if(!isprime(N)) return false;
	    while(N){
	        if(!isprime(N%10)) return false;
	        N/=10;
	    }
	    return true;
	}
};
