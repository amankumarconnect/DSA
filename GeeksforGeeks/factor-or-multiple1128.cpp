class Solution {
  public:
    int factorOrMultiple(int N , int X , int A[]) {
        // code here
        int ora = 0;
        for(int i = 0; i<N; i++){
            if(A[i]%X==0) ora = ora|A[i];
        }
        return ora;
    }
};
