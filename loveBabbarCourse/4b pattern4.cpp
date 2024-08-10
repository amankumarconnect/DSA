// pattern 4
#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int i = 1;
  int p = 1;
  while(i<=n){
    int j = 1;
    while(j<=n){
      cout<<p;
      j++;
      p++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
