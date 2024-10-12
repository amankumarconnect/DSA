//User function Template for C++

void toBinary(int N)
{
    // your code here
    int ans = 0;
    int mul = 1;
    while(N){
        ans+= (N%2)*mul;
        mul*=10;
        N/=2;
    }
    cout<<ans;
}
