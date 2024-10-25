class Solution
{
	public:
		long sum_of_gp(long n,long a, long r)
		{
		    if(r==1) return a*n;
		    return a*((long long)pow(r,n)-1)/(long long)(r-1);
		}
};
