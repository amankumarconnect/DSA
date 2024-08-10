// pattern 14
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    char p = 'A' + i - 1;
    while (j <= n) {
      cout << p;
      j++;
      p++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
