class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> maps;
        for(char c: chars) maps[c]++;
        int count = 0;
        for(string s: words){
            unordered_map<char,int> maps2;
            for(char c: s) maps2[c]++;
            bool flag = true;
            for(char c: s){
                if(maps2[c]>maps[c]){
                    flag = false;
                    break;
                }
            }
            if(flag) count+=s.size();
        }
        return count;
    }
};
