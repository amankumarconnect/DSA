// User function Template for C++
class Solution {
  public:
    string delAlternate(string S) {
        // code here
        string str;
        for(int i = 0; i<S.size(); i++){
            if(!(i&1)) str+=S[i];
        }
        return str;
    }
};
