//User function Template for C++

class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        // Your code
        while(n){
            if((n&1)&&((n>>1)&1)) return false;
            n = n>>1;
        }
        return true;
    }
};
