
class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // Your code here
        int count = 0;
        for(char c: a){
            if(c=='1') count++;
        }
        count-=1;
        return (count)*(count+1)/2;
    }

};
