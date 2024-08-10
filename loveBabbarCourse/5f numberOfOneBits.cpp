// Count number of 1 bits
#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int count=0;
  while(n){
    if(n&1){
      count+=1;
    };
    n=n>>1;
  }
  cout<<count;
  return 0;
}
