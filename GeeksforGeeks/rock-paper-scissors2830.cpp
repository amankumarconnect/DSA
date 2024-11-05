

class Solution
{
  public:
    string gameResult (string s)
        {
            //code here.
            if(s[0]==s[1]) return "DRAW";
            if(s[0]=='R'){
                if(s[1]=='S') return "A";
                return "B";
            }
            else if(s[0]=='S'){
                if(s[1]=='R') return "B";
                return "A";
            }
            if(s[1]=='R') return "A";
            return "B";
        }
};
