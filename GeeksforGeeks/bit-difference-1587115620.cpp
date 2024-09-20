//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int temp = a&b;
        int count = 0;
        while(a||b){
            if(((a&1)&&!(b&1))||(!(a&1)&&(b&1))){
                count++;
            }
            a = a>>1;
            b = b>>1;
        }
        return count;
    }
};
