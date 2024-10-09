//User function template for C++
class Solution{
public:	
		
		
	int isSame(string s)
	{
	    // Your code goes here
	    int n = s.size();
	    int num = 0;
	    int i = n-1;
	    int mul = 1;
	    for(i = n-1; i>=0; i--){
	        if(s[i]<'0'||s[i]>'9') break;
	        num+= (s[i]-'0')*mul;
	        mul*=10;
	    }
	    return num==i+1;
	}
};
