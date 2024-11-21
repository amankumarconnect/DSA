class Solution {
public:
    string truncateSentence(string s, int k) {
        string str;
        int space = 0;
        for(char c: s){
            if(c==' '){
                space++;
                if(space == k) break;
            }
            str+=c;
        }
        return str;
    }
};
