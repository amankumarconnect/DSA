class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string str;
        for(string su: words){
            str+=su[0];
        }
        return str==s;
    }
};
