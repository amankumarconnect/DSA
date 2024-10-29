class Solution {
public:
    string reversePrefix(string word, char ch) {
        string str;
        for(int i = 0; i<word.size(); i++){
            if(word[i]==ch){
                str = word.substr(0,i+1);
                reverse(str.begin(),str.end());
                return str + word.substr(i+1, word.size()-i);
            }
        }
        return word;
    }
};
