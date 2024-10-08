class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) {

        // Your code here
        int low = 0;
        int high = N-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==K) return 1;
            if(K>arr[mid]) low = mid+1;
            else if(K<arr[mid]) high = mid-1;
        }
        return -1;
    }
};
