

class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	int sum = 0;
    	// Your code here
    	int i = 0;
    	string temp = "0";
    	
    	while(i<str.size()){
    	    if(str[i]<'a'){
    	        temp+=str[i];
    	    }
    	    else{
    	        sum+=stoi(temp);
    	        temp = "0";
    	    }
    	    i++;
    	}
    	if(temp!="0") sum+=stoi(temp);
    	return sum;
    }
};
