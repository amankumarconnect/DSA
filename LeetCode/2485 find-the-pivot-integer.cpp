class Solution {
public:
    int pivotInteger(int n) {
        int sum1 = 0; int sum2 = (n*(n+1))/2;
        for(int i = n; i>0; i--){
            sum1 += i;
            if(sum1 == sum2) return i;
            sum2 -= i;
        }
        return -1;
    }
};
