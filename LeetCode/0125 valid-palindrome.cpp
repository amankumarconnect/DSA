class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char c:s){
            if(isalpha(c)) str+=tolower(c);
            else if(isdigit(c)) str+= c;
        }
        string stro = str;
        reverse(str.begin(),str.end());
        return stro==str;
    }
};
