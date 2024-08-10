// Power of two
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  bool ispower = false;
  for (int i = 0; i < 32; i++) {
    if (n == pow(2, i)) {
      ispower=true;
    }
  }
  cout<<ispower;
  return 0;
}
