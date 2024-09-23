

class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        unordered_map<char,int> maps;
        for(char c: s1){
            if(maps[c]==0) maps[c]++;
        }
        for(char c: s2){
            if(maps[c]==1) maps[c]=3;
            if(maps[c]==0) maps[c]=2;
        }
        string s;
        for(char c:s1){
            if(maps[c]==1) s+=c;
        }
        for(char c:s2){
            if(maps[c]==2) s+=c;
        }
        if(s=="") return "-1";
        else return s;
    }

};
