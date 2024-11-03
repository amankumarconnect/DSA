
class Solution
{
	public:
		string is_AutomorphicNumber(int n)
		{
		    // Code here
		    int dig = n%10;
		    if(dig==0||dig==1||dig==5||dig==6) return "Automorphic";
		    return "Not Automorphic";
		}
};
