   
class Solution{
public:
    int isBitSet(int N){
        // code here {
        if(N==0) return 0;
        if(N&N+1) return 0;
        else return 1;
    }
};
