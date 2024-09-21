//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int rev = 0;
		    int temp = n;
		    while(temp){
		        rev = rev*10 + (temp%10);
		        temp/=10;
		    }
		    if(rev==n) return "Yes";
		    else return "No";
		}
};
