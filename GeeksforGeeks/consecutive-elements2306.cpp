class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string str = "";
        str+=S[0];
        for(int i = 1; i<S.size(); i++){
            if(S[i]!=S[i-1]) str+=S[i];
        }
        return str;
    }
};
