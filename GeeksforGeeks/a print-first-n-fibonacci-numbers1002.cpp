//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> vecs;
        if(n == 1){
            vecs.push_back(1);
            return vecs;
        }
        vecs.push_back(1);
        vecs.push_back(1);
        long a = 1;
        long b = 1;
        for(int i = 0; i<n-2; i++){
            long c = a+b;
            vecs.push_back(c);
            a = b;
            b = c;
        }
        return vecs;
    }
};
