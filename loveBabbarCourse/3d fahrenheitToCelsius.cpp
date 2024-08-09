// Fahrenheit to celsius
#include <iostream>
using namespace std;

int main() {
  float f,c;
  cout<<"Enter temperature in fahrenheit: ";
  cin>>f;
  c = (5.0/9)*(f-32);
  cout<<c;
  return 0;
}
