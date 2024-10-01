class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    int temp = n;
    int count = 1;
    while(temp){
        if(temp%10==0) n+=count*5;
        temp/=10;
        count*=10;
    }
    return n;
    }
};
