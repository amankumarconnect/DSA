class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        int temp = N;
        temp = temp>>K;
        if(temp&1){
            return N;
        }
        else return N+pow(2,K);
    }
    
};

