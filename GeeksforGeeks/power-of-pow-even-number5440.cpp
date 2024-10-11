class Solution
{
	public:
		long long int sum_of_square_evenNumbers(long long int n)
		{
		    // Code here
		    long long int sum = 0;
		    for(int i = 1; i<=n; i++){
		        sum+=pow(i*2,2);
		    }
		    return sum;
		}
};
