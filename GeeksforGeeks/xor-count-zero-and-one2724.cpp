//User function Template for C++

class Solution
{
public:
	int find_xor(int n)
	{
	    // Code here
	    int set = 0;
	    int unset = 0;
	    while(n){
	        if(n&1) set++;
	        else unset++;
	        n = n>>1;
	    }
	    return set^unset;
	}
};
