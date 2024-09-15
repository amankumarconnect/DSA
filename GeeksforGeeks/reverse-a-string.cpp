//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int i = 0;
        int n = str.size();
        
        while(i<n/2){
            char temp = str[i];
            str[i] = str[n-i-1];
            str[n-i-1] = temp;
            i++;
        }
        return str;
    }
};
