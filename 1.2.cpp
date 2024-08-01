//Calculate Simple Interest

#include <iostream>
using namespace std;

int main(){
  int p,r,t;
  cout<<"Enter Principal Amount: ";
  cin>>p;
  cout<<"Enter Rate of Interest: ";
  cin>>r;
  cout<<"Enter Time: ";
  cin>>t;
  cout<<"Simple Interest is: "<<((p*r*t)/100);
}
