// User function Template for C++

class Solution{
public:
    int heapHeight(int N, int arr[]){
        // code here
        int a = 1;
        int ans = 1;
        int count = 0;
        while(ans<N){
            a = a<<1;
            ans+=a;
            count++;
        }
        return count;
    }
};
