//Is n positive, negative or zero
#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"What's n? ";
  cin>>n;
  if(n>0) cout<<"n is positive";
  else if(n<0) cout<<"n is negative";
  else cout<<"n is zero";
  return 0;
}
