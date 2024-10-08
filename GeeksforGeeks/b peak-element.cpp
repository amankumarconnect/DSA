/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       if(n ==1){
           return 0;
       }
       if(arr[0]>=arr[1]){
           return 0;
       }
       if(arr[n-1]>=arr[n-2]){
           return n-1;
       }
       
       int low = 1;
       int high = n-2;
       while(low<=high){
           int mid = (low+high)/2;
           if(arr[mid]>=arr[mid-1]&&arr[mid]>=arr[mid+1]){
               return mid;
           }
           if(arr[mid-1]>arr[mid]){
               high = mid-1;
           }
           else{
               low = mid+1;
           }
       }
       return -1;
    }
};
