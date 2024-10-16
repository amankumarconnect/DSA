//User function template for C++
class Solution{
public:	

	string removeCharacters(string S) 
	{
	    // Your code goes here
	    int j = 0;
	    for(char c:S){
	        if(c>='0'&&c<='9'){
	            S[j]= c;
	            j++;
	        }
	    }
	    return S.substr(0,j);
	}
};
