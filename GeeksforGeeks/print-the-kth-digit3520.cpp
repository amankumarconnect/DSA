class Solution{
public:
    int kthDigit(int A,int B,int K){
        // code here
        long long int n= pow(A,B);
        for(int i = 0; i<K-1; i++){
            n/=10;
        }
        return n%10;
    }
};
