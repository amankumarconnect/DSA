

class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        unordered_map<char,int> maps;
        for(char c:s){
            if(maps[c]) return false;
            maps[c]++;
        }
        return true;
    }
};
