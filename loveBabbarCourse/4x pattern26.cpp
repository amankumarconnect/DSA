// pattern 26
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= (n - i + 1)) {
      cout << j << " ";
      j++;
    }
    j = 1;
    while (j <= 2 * (i - 1)) {
      cout << "* ";
      j++;
    }
    j = 1;
    while (j <= (n - i + 1)) {
      cout << (n-j+1) << " ";
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
