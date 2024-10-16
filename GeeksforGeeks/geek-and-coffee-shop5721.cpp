// User function Template for C++

class Solution{
public:
    int mthHalf(int N, int M){
        // code here
        while(M-1){
            N/=2;
            M--;
        }
        return N;
    }
};
