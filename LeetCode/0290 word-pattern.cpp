class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> maps;
        unordered_map<string,char> map2;
        string str = "";
        int j = 0;
        for(char c: s){
            if(j>pattern.size()-1) return false;
            if(c == ' '){
                if(maps.find(pattern[j]) != maps.end()){
                    if(maps[pattern[j]]!=str) return false;
                }
                else{
                    maps[pattern[j]] = str;
                }
                if(map2.find(str) != map2.end()){
                    if(map2[str]!=pattern[j]) return false;
                }
                else{
                    map2[str] = pattern[j];
                }
                j++;
                str = "";
            }
            else str+=c;
        }

        if(maps.find(pattern[j]) != maps.end()){
            if(maps[pattern[j]]!=str) return false;
        }
        else{
            maps[pattern[j]] = str;
        }
        if(map2.find(str) != map2.end()){
            if(map2[str]!=pattern[j]) return false;
        }
        else{
            map2[str] = pattern[j];
        }
        if(j<pattern.size()-1) return false;
        return true;
    }
};
