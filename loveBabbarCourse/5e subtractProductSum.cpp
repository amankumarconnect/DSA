// Subtract the product and sum of the digits of an integer
#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int sum = 0;
  int product = 1;
  while(n){
    int digit = n%10;
    sum += digit;
    product *= digit;
    n /= 10;
  }
  cout<<product - sum;
  return 0;
}
