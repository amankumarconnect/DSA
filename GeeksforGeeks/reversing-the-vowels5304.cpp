class Solution
{
    public:
        string modify (string s)
        {
            //code here.
            string str;
            for(int i = 0; i<s.size();i++){
                int c = s[i];
                if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                    str+=c;
                }
            }
            
            int j= str.size()-1;
            for(int i = 0; i<s.size();i++){
                int c = s[i];
                if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                    s[i] = str[j];
                    j--;
                }
            }
            return s;
        }
};
