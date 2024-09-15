
class Solution {
  public:
    void reverseInGroups(vector<long long int> &arr, int k) {
        // code here
        int n = arr.size();
        int i = 0;
        int j;
        if(k>n){
            j = n-1;
        }
        else{
            j = k-1;
        }
        
        while(i<n){
            int start = i;
            int end = j;
            while(start<end){
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
            if(j+k>=n){
                j = n-1;
            }else{
                j+=k;
            }
            i+=k;
        }
    }
};
