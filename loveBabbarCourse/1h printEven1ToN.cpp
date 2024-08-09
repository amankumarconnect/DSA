//Print even numbers between 1 to n
#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  for(int i=2;i<=n;i+=2){
    cout<<i<<endl;
  }
  return 0;
}
