class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        while(left<=right){
            int bits = 0;
            int n = left;
            while(n){
                if(n&1) bits++;
                n = n>>1;
            }
            bool flag = true;
            if(bits==1) flag = false;
            for(int i = 2; i<bits; i++){
                if(bits%i==0){
                    flag = false;
                    break;
                }
            }
            if(flag) count++;
            left++;
        }
        return count;
    }
};
