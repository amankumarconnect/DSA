/*Complete the function below*/

class Solution {
  public:
    bool PalinArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i = 0; i<n; i++){
            int temp = arr[i];
            int rev = 0;
            while(temp){
                rev = rev*10 + temp%10;
                temp/=10;
            }
            if(arr[i]!=rev) return false;
        }
        return true;
    }
};
