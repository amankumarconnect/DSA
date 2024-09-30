class Solution {
  public:
    int maximizeMoney(int N , int K) {
        // code here
        int house;
        if(N&1){
            house = (N/2)+1;
        }
        else house = N/2;
        return house*K;
    }
};
