// User function Template for C++
class Solution {
  public:
    string URLify(string& s) {
        // code here
        string str;
        for(char c:s){
            if(c==' ') str+="%20";
            else str+=c;
        }
        return str;
    }
};
