//Note that here maps store the index of last occurance + 1

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int res = 0;
       int i = 0;
       unordered_map<char,int> maps;
       int n = s.length();

       for(int j = 0; j<n; j++){
        char c = s[j];

        if(maps[c]>0){
            i = max(i,maps[c]);
        }

        res = max(res, j-i+1);

        maps[c] = j+1;
       } 
       return res;
    }
};
