// Bitwise operators
#include <iostream>
using namespace std;

int main() {
  int a,b;
  cout<<"Enter a and b: ";
  cin>>a>>b;
  cout<<"a&b: "<<(a&b)<<endl;
  cout<<"a|b: "<<(a|b)<<endl;
  cout<<"a^b: "<<(a^b)<<endl;
  cout<<"~a: "<<(~a)<<endl;
  cout<<"a>>2: "<<(a>>5)<<endl;
  cout<<"a<<2: "<<(a<<5)<<endl;
  return 0;
}
