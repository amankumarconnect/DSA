// Compare two numbers using nested conditionals
#include <iostream>
using namespace std;

int main() {
  int a,b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  if(a>b){
    cout<<"a is greater";
  }
  else{
    if(a<b){
      cout<<"b is greater";
    }
    else{
      cout<<"both are equal";
    }
  }
  return 0;
}
