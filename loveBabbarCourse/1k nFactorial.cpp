//Find n!
#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int sum = 1;
  for(int i=1;i<=n;i++){
    sum *= i;
  }
  cout<<sum;
  return 0;
}
