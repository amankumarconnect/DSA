//User function template for C++
class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	    for(int i = 0; i<n; i++){
	        if(arr[i+1]<arr[i]){
	            arr[i] = arr[i+1];
	        }else{
	            arr[i] = -1;
	        }
	    }
	    arr[n-1] = -1;
	}

};
