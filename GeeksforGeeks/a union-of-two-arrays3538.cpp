// User function template in C++

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
        // code here
        unordered_set<int> sets;
        int s1 = arr1.size();
        int s2 = arr2.size();
        int i = 0;
        while(i<s1||i<s2){
            if(i<s1){
                sets.insert(arr1[i]);
            }
            if(i<s2){
                sets.insert(arr2[i]);
            }
            i++;
        }
        return sets.size();
    }
};
