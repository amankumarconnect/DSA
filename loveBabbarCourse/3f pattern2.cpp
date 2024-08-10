// pattern 2
#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int i = 1;
  while(i<=n){
    int j = 0;
    while(j<n){
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
