class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        return (1<<K| N);
    }
    
};

