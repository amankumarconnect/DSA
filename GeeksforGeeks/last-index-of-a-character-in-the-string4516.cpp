class Solution{
    public:
    
    int LastIndex(string s, char p){
        //complete the function here
        for(int i = s.size(); i>=0; i--){
            if(s[i]==p) return i;
        }
        return -1;
    }
};
