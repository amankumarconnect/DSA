// User function Template for C++
class Solution{
    public:
    int bitMultiply(int N){
        // code here
        int count = 0;
        int temp = N;
        while(temp){
            if(temp&1) count++;
            temp/=2;
        }
        return N*count;
    }
};
