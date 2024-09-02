#include<iostream>
using namespace std;

int power(){
    int n,p;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>p;
    int ans=1;
    for(int i=0;i<p;i++){
        ans *= n;
    }
    return ans;
}

int main(){
    cout<<power();
    return 0;
}
