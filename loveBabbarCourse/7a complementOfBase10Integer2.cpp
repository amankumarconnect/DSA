// Complement of base 10 integer 2
#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int mask = 1;
  while(mask<=n){
    n = n^mask;
    mask = mask<<1;
  }
  cout<<n;
  return 0;
}
