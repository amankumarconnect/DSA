// pattern 25
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int i = 0;
  while (i < n) {
    int j = 0;
    int p = 1;
    while (j < (n - i - 1)) {
      cout << "  ";
      j++;
    }
    j = 0;
    while (j < (i + 1)) {
      cout << p << " ";
      j++;
      p++;
    }
    p=i;
    j=0;
    while(j<i){
      cout<<p<<" ";
      j++;
      p--;
    }
    cout << endl;
    i++;
  }
  return 0;
}
