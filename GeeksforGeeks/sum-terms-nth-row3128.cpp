//User function Template for C++

class Solution{
	public:
   	int Nth_rowSum(int n){
   	    // Code here.
   	    int m = 1e9+7;
   	    long long int e = n*(n+1);
   	    long long int s = n*(n-1);
   	    long long ans = ((e*(e+1))/2) - ((s*(s+1))/2);
   	    return ans%m;
   	}    
};
