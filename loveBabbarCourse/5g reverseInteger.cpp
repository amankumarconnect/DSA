// Reverse integer
#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int rev=0;
  while(n){
    rev = (rev*10)+(n%10);
    n/=10;
  }
  cout<<rev;
  return 0;
}
