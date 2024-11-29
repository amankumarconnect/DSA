class Solution {
public:
    string finalString(string s) {
        string str;
        for(char c:s){
            if(c=='i') reverse(str.begin(),str.end());
            else str+=c;
        }
        return str;
    }
};
