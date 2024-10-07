//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int N,string S) {
           //code here
           int R = 0, G = 0;
           for(char c: S){
               if(c=='R') R++;
               else G++;
           }
           if(R<G) return R;
           return G;
    }
};
