//User function Template for C++

class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        // code here 
        string alpha, num, special;
        for(char c: S){
            if(isalpha(c)) alpha+=c;
            else if(isdigit(c)) num+=c;
            else special+=c;
        }
        return {alpha,num,special};
    } 
};
