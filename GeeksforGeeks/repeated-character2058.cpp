class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        unordered_map<char,int> maps;
        for(char c:s){
            maps[c]++;
        }
        for(char c:s){
            if(maps[c]>1) return c;
        }
        return '#';
    }
};
