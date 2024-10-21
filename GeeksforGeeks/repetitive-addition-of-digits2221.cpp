//User function Template for C++
class Solution
{
public:
    int singleDigit(long long N)
    {
        // Write Your Code here
        return N%9 ? N%9:9;
    }
};
