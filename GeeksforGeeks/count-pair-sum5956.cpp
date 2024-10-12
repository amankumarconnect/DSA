
class Solution {
  public:
    int countPairs(vector<int>& arr1, vector<int>& arr2, int x) {
        // code here.
        int count = 0;
        int l = 0; 
        int r = arr2.size()-1;
        while(l<arr1.size()&&r>=0){
            if(arr1[l]+arr2[r]==x){
                count++;
                l++;
                r--;
            }
            else if(arr1[l]+arr2[r]<x) l++;
            else r--;
        }
        return count;
    }
};
