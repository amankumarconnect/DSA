//User function template for C++

class Solution{
public:
    string removeSpecialCharacter(string s) {
        // code here
        string str;
        for(char c:s){
            if(isalpha(c)) str+=c;
        }
        return str.size() ? str : "-1";
    }
};
