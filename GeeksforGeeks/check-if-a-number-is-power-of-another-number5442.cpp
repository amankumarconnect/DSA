class Solution{   
public:
    int isPowerOfAnother(long long X, long long Y){
        // code here 
        if(X==1&&Y!=1) return 0;
        while(Y>1){
            if(Y%X!=0){
                return 0;
            }
            Y/=X;
        }
        return 1;
    }
};
