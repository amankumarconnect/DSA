class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        // code here
        int a = A+B;
        int m = A*B;
        int s = 0, d = 0;
        if(A>B){
            s= A-B;
            d = A/B;
        }
        else{
            s = B-A;
            d = B/A;
        }
        return {a,m,s,d};
    }
};
