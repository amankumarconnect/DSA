class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        string ans;
        int itr=0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]!=' '){
                s[itr++] = s[i];
            }
        }
        return s.substr(0,itr);
    }
};
