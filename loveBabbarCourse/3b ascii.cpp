// ASCII values and coditionals
#include <iostream>
using namespace std;

int main() {
  char c;
  cout << "Enter a character: ";
  cin >> c;
  if (c >= 'a' && c <= 'z')
    cout << "lowercase";
  else if (c >= 'A' && c <= 'Z')
    cout << "uppercase";
  else if (c >= '0' && c <= '9')
    cout << "digit";
  return 0;
}
