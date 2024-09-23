
class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // code here
        int low = 0;
        int high = arr.size()-1;
        while(low<=high){
            if(arr[low]!=arr[high]) return false;
            low++;
            high--;
        }
        return true;
    }
};
