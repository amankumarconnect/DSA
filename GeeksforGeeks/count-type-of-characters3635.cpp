class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            int l = 0, u = 0, sp = 0, n = 0;
            for(char c: s){
                if(c>='a'&&c<='z') l++;
                else if(c>='A'&&c<='Z') u++;
                else if(c>='0'&&c<='9') n++;
                else sp++;
            }
            return {u,l,n,sp};
        }
};
