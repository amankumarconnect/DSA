// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        string str;
        unordered_map<char,int> maps;
        for(char c: string2) maps[c]++;
        for(char c: string1){
            if(!maps[c]) str+=c;
        }
        return str;
    }
};
