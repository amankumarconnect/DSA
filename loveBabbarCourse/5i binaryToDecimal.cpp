// Binary to decimal
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int dec =0;
  int base = 1;
  while(n){
    dec+= base*(n%10);
    n/=10;
    base *=2;
  }
  cout<<dec;
  return 0;
}
