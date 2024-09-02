#include<iostream>
using namespace std;

long long factorial(int n){
    long long ans = 1;
    for(int i = 1;i<=n;i++){
        ans*=i;
    }
    return ans;
}

int ncr(int n,int r){
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int r;
    cout<<"enter r: ";
    cin>>r;
    cout<<"ncr is "<<ncr(n,r);
    return 0;
}
