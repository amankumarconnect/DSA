#include<iostream>
using namespace std;

bool checkPrime(int n){
    bool ans = 1;
    for(int i =2;i<n;i++){
        if(n%i==0){
            ans = 0;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    if(checkPrime(n)){
        cout<<"It's prime";
    }
    else{
        cout<<"Not prime";
    }
    return 0;
}
