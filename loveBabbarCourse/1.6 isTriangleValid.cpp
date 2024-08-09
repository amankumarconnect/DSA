//Check if a given triangle is valid
#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cout<<"Enter the sides of the triangle: ";
  cin>>a>>b>>c;
  if(a+b<c || b+c<a || a+c<b) cout<<"invalid";
  else cout<<"valid";
  return 0;
}
