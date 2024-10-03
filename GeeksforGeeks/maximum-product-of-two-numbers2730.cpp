// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        // code here
        int max1= -1, max2=-1;
        for(int i:arr){
            if(i>max1){
                max2=max1;
                max1 = i;
            }
            else if(i>max2) max2 = i;
        }
        return max1*max2;
    }
};
