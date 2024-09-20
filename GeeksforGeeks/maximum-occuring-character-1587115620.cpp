

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        unordered_map<char,int> maps;
        int temp = 0;
        char c = str[0];
        for(auto i: str){
            maps[i]++;
            if(maps[i]>temp||(maps[i]==temp&&c>i)){
                temp = maps[i];
                c = i;
            }
        }
        return c;
    }
};
