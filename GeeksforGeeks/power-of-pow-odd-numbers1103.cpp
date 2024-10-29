
class Solution
{
	public:
		long long int sum_of_square_oddNumbers(long long int n)
		{
		    // Code here.
		    long long int sum = 0;
		    for(int i = 1; i<=n; i++){
		        sum+= pow((2*i-1),2);
		    }
		    return sum;
		}
};
