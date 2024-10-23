
class Solution{
	public:
	vector<long long int> find(int l, int b, int h)
	{
	    // Code here
	    long long int area = 2LL*(1LL*l*b + 1LL*b*h + 1LL*h*l);
	    long long int vol = 1LL*l*b*h;
	    return {area,vol};
	}  
};
