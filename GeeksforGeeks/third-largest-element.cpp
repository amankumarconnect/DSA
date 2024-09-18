class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        int first = 0, second = 0, third = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]>=first){
                third = second;
                second = first;
                first = arr[i];
            }
            if(arr[i]>=second&&arr[i]<first){
                third = second;
                second = arr[i];
            }
            if(arr[i]>=third&&arr[i]<second) third = arr[i];
        }
        return third;
    }
};
