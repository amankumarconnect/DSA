// pattern 9
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int i = 1;
  int p;
  while (i <= n) {
    int j = 1;
    p = i;
    while (j <= i) {
      cout << p;
      j++;
      p++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
