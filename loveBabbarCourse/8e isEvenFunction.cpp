#include<iostream>
using namespace std;

bool isEven(int n){
    if(n&1) return 0;
    else return 1;
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    if(isEven(n)) cout<<"Even number";
    else cout<<"odd number";
    return 0;
}
