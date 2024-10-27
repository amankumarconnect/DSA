//User function template for C++
class Solution{
public:	
	
	int penaltyScore(string S)
	{
	    // Your code goes here
	    int count = 0;
	    for(int i = 1; i<S.size(); i++){
	        if(S[i]=='1'&&S[i-1]=='2') count++;
	    }
	    return count;
	}
};
