class Solution {
  public:
    string computeParity(int N) {
        // code here
        int count = 0;
        while(N){
            if(N&1) count++;
            N = N>>1;
        }
        if(count&1) return "odd";
        return "even";
    }
};
