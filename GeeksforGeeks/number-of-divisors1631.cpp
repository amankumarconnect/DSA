//User function Template for C++

class Solution
{
	public:
		int count_divisors(int n)
		{
		    //Code here.
		    int count = 0;
		    for(int i = 1; i*i<=n; i++){
		        if(n%i==0&&i%3==0) count++;
		        if(n%i==0&&(i!=n/i)&&((n/i)%3==0)) count++;
		    }
		    return count;
		}
};
