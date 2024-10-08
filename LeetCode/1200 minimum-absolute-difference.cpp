class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
   	    int diff = INT_MAX;
        vector<vector<int>> nums;
   	    for(int i = 1; i<arr.size(); i++){
   	        if(arr[i]-arr[i-1]<diff) diff = arr[i]-arr[i-1];
   	    }
   	    for(int i = 1; i<arr.size(); i++){
   	        if(arr[i]-arr[i-1]==diff){
                nums.push_back({arr[i-1],arr[i]});
            }
   	    }
        return nums;
    }
};
