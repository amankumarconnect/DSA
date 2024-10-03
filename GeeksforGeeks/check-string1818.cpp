class Solution
{
    public:
        bool check (string s)
        {
        	//code here.
        	for(int i = 1; i<s.size();i++){
        	    if(s[i]!=s[i-1]) return 0;
        	}
        	return 1;
        }
};
