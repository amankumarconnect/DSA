// User function Template for C++

class Solution {
  public:
    int maxPoint(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int maxi = INT_MIN;
        for(int i = 0; i<arr1.size(); i++){
            int temp = (k/arr1[i])*arr2[i];
            maxi = max(temp, maxi);
        }
        return maxi;
    }
};
