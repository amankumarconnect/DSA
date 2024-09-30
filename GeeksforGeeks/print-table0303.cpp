//User function Template for C++
class Solution
{
public:
    vector<int> getTable(int N)
    {
        // Write Your Code here
        vector<int> vecs;
        for(int i = 1; i<=10; i++){
            vecs.push_back(i*N);
        }
        return vecs;
    }
};
