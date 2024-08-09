// Data types
#include <iostream>
using namespace std;

int main() {
  int i = 123;
  float f = 1.23;
  double d = 1.78;
  bool b = true;
  char c = 'A';
  cout << "Size of int is " << sizeof(i) << " bytes " << endl;
  cout << "Size of float is " << sizeof(f) << " bytes " << endl;
  cout << "Size of double is " << sizeof(d) << " bytes " << endl;
  cout << "Size of bool is " << sizeof(b) << " bytes " << endl;
  cout << "Size of char is " << sizeof(c) << " bytes " << endl;
  return 0;
}
