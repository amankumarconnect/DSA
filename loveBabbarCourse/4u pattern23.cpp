// pattern 23
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int i = 0;
  while (i < n) {
    int j = 0;
    while (j < (n-i-1)) {
      cout << " ";
      j++;
    }
    j = 0;
    while (j < (i+1)) {
      cout << i+1;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
