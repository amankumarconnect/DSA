//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string str;
	    for(int i = 0; i<S.size(); i++){
	        if(i==0||S[i-1]==' ') str+=S[i];
	    }
	    return str;
	}
};
