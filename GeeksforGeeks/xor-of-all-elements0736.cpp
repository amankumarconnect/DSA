class Solution
{
public:
    vector<int> getXor(vector<int> A, int N)
    {
        // Write your Code here
        int k = A[0];
        for(int i = 1; i<N; i++){
            k = k^A[i];
        }
        for(int i = 0; i<N; i++){
            A[i] = k^A[i];
        }
        return A;
    }
};
