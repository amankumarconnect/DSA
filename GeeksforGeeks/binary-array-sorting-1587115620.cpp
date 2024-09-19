class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
       int low = 0;
       int high = N-1;
       while(low<high){
           if(A[high] ==1){
               high--;
               continue;
           }
           if(A[low] == 0){
               low++;
               continue;
           }
           swap(A[low],A[high]);
           high--;
           low++;
       }
       
       /**************
        * No need to print the array
        * ************/
    }
};
