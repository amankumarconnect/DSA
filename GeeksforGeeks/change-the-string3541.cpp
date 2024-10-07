
class Solution{
    public:
    
    string modify (string s)
    {
        // your code here
        if(islower(s[0])){
            for(int i = 1; i<s.size(); i++) s[i]=tolower(s[i]);
        }
        else{
            for(int i = 1; i<s.size(); i++) s[i]=toupper(s[i]);
        }
        return s;
    }
};
