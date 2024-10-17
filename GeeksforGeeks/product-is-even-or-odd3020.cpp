

int EvenOdd(string n1 , string n2)
{
    //code here.
    int num1 = (n1[n1.size()-1]-'0');
    int num2 = (n2[n2.size()-1]-'0');
    if((!(num1&1))||(!(num2&1))) return 1;
    return 0;
}
