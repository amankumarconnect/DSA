//User function Template for C++
class Solution
{
public:
    int digitalRoot(int N)
    {
        // Write Your Code here
        int dig;
        if(N==9) dig = 9;
        else dig = N%9;
        if(dig<2) return 0;
        for(int i = 2; i*i<=dig; i++){
            if(dig%i==0) return 0;
        }
        return 1;
    }
};
