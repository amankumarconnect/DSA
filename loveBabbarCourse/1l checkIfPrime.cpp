//Check if n is prime
#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  bool isPrime = true;
  for(int i = 2;i<n;i++){
    if(n%i==0) isPrime = false;
  }
  if(isPrime) cout<<"Prime";
  else cout<<"Not Prime";
  return 0;
}
