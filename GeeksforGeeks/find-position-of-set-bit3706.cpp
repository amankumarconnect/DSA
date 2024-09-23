class Solution {
  public:
    int findPosition(int N) {
        // code here
        if(N==0) return -1;
        int count = 1;
        while(!(N&1)){
            N=N>>1;
            count++;
        }
        if(N==1) return count;
        else return -1;
    }
};
