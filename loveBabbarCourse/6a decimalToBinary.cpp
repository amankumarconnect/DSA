// Decimal to binary
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int bin = 0;
  int i =0;
  while(n){
    bin+= ((n&1)*pow(10,i));
    n=n>>1;
    i++;
  }
  cout << bin;
  return 0;
}
