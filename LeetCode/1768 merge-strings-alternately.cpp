class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int n = max(word1.size(),word2.size());
        for(int i = 0; i<n; i++){
            if(i<word1.size()) str+=word1[i];
            if(i<word2.size()) str+=word2[i];
        }
        return str;
    }
};
