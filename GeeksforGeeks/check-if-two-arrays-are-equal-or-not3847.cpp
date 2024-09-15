// User function template for C++

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool check(vector<int>& arr1, vector<int>& arr2) {
        // code here
        int n = arr1.size();
        unordered_map<int,int> maps;
        int count = 0;
        
        for(int i = 0; i<n; i++){
            if(maps[arr1[i]]<0){
                count++;
            }
            maps[arr1[i]]++;
            
            if(maps[arr2[i]]>0){
                count++;
            }
            maps[arr2[i]]--;
            
        }
        return (count == n);
    }
};
