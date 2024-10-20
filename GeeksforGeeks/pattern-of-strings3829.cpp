//User function template for C++
class Solution{
public:	
	
	vector<string> pattern(string S)
	{
	    // Your code goes here
	    int j = S.size();
	    vector<string> vecs;
	    while(j){
	        vecs.push_back(S.substr(0,j));
	        j--;
	    }
	    return vecs;
	}

};
