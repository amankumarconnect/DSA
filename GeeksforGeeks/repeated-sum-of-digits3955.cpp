class Solution{   
public:
    int repeatedSumOfDigits(int N){
        // code here 
        return N%9? N%9: 9;
    }
};
