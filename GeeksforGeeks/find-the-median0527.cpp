class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    int n = v.size();
		    sort(v.begin(),v.end());
		    if(n%2==0){
		        return ((v[n/2]+v[n/2-1])/2);
		    } else{
		        return v[n/2];
		    }
		}
};
