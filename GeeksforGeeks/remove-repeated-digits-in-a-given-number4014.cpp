


long long int modify (long long int N)
{
    // your code here
    long long int ans = 0;
    long long int dig = -1;
    long long int mul = 1;
    while(N){
        if(N%10 == dig){
            N/=10;
            continue;
        }
        dig = N%10;
        ans += dig*mul;
        mul *= 10;
        N/=10;
    }
    return ans;
}
