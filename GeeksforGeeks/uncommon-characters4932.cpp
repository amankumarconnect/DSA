class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            unordered_map<char,int> maps;
            string str = "";
            
            for(char c: A){
                if(maps[c]==0) maps[c]=2;
            }
            for(char c:B){
                if(maps[c]==2) maps[c]=1;
                else if(maps[c]==0) maps[c]=3;
            }
            for(char c = 'a'; c<='z'; c++){
                if(maps[c]>=2) str+=c;
            }
            if(str=="") return "-1";
            else return str;
        }
};

