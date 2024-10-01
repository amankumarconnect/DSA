//User function template for C++
class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    string str;
	    for(char c:S){
	        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') continue;
	        str+=c;
	    }
	    return str;
	}
};
