class Solution{
public:
    int evenFactors(int N){
        // code here
        if(N%2!=0) return 0;
        int sum = 0;
        for(int i = 2; i<=N; i+=2){
            if(N%i==0) sum+=i;
        }
        return sum;
    }
};
