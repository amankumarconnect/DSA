//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> vecs(n);
        
        vecs[0] = 1;
        if(n == 1) return vecs;
        
        vecs[1] = 1;
        
        long a = 1;
        long b = 1;
        for(int i = 2; i<n; i++){
            vecs[i] = vecs[i-1]+vecs[i-2];
        }
        return vecs;
    }
};
