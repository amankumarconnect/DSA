// User function Template for C++
class Solution {
  public:
    string javaSub(string S, int L, int R) {
        // code here
        string str;
        for(int i = L; i<=R; i++){
            str+=S[i];
        }
        return str;
    }
};
