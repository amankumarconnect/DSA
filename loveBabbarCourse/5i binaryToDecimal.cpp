// Binary to decimal
#include <iostream>
#include<cmath>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int dec =0;
  int i = 0;
  while(n){
    dec+= pow(2,i)*(n%10);
    n/=10;
    i++;
  }
  cout<<dec;
  return 0;
}
