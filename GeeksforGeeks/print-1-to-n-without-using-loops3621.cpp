//User function Template for C++
class Solution
{
public:
    void printTillN(int N)
    {
        // Write Your Code here
        if(N>1){
            printTillN(N-1);
        }
        cout<<N<<" ";
        
    }
};
