class Solution {
  public:
    int maxNtype(vector<int>& arr) {
        // code here.
        int maxo = INT_MIN, maxi = -1;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]>maxo){
                maxo = arr[i];
                maxi = i;
            }
        }
        if(maxi!=arr.size()-1&&maxi!=0){
            if(arr[maxi+1]>arr[maxi-1]) return 3; 
            if(arr[maxi-1]>arr[maxi+1]) return 4;
        }
        if(maxi == 0) return 2;
        return 1;
    }
};
