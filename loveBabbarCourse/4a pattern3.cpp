// pattern 3
#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=n){
      cout<<j;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
