class Solution{
public:
    int isLeap(int N){
        //code here
        if(N%4==0&&N%100!=0) return 1;
        if(N%100==0&&N%400==0) return 1;
        return 0;
    }
};
