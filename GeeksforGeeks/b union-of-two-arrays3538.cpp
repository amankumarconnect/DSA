// User function template in C++

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
        // code here
        unordered_map<int,int> maps;
        
        int m = arr1.size();
        int n = arr2.size();
        int i = 0;
        
        while(i<m||i<n){
            if(i<m){
                maps[arr1[i]]++;
            }
            if(i<n){
                maps[arr2[i]]++;
            }
            i++;
        }
        return maps.size();
    }
};
