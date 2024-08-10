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
    while (j < (n - i - 1)) {
      cout << "  ";
      j++;
    }
    j = 0;
    while (j < (i + 1)) {
      cout << (j+1) << " ";
      j++;
    }
    j=0;
    while(j<i){
      cout<<(i-j)<<" ";
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
