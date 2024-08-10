// pattern 22
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int i = 0;
  while (i < n) {
    int j = 0;
    while (j < i) {
      cout << " ";
      j++;
    }
    j = 0;
    while (j < (n - i)) {
      cout << i+1;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
