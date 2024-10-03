class Solution {
  public:
    int setBit(int n) {
        // Write Your Code here
        int k = 1;
        int temp = n;
        while(temp&1){
            k = k<<1;
            temp = temp>>1;
        }
        return n|k;
    }
};
