// Power of two 2
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  bool ispower = false;
  if((n&(n-1))==0) ispower =true;
  cout<<ispower;
  return 0;
}
