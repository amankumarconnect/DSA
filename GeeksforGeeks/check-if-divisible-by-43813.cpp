//User function template for C++
class Solution{
public:	
	
	int divisibleBy4 (string N)
	{
	    // Your Code Here
	    int n = (N[N.size()-1] - '0');
	    if(N.size()>=2) n+= 10 *(N[N.size()-2] - '0');
	    return n%4 ? 0: 1;
	}
};
