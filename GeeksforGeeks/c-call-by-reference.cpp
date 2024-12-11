//User function Template for C++

void reverse_dig(int &a,int &b)
{
    //Add your code here.
    int temp1 = a, temp2 = b;
    a = 0, b = 0;
    while(temp1){
        a = ((a*10) + (temp1%10));
        temp1/=10;
    }
    while(temp2){
        b = ((b*10) + (temp2%10));
        temp2/=10;
    }
}
void swap(int &a,int &b)
{
    //Add your code here.
    int temp = a;
    a = b;
    b = temp;
}
