// pattern 13
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int i = 1;
  char p = 'A';
  while (i <= n) {
    int j = 1;
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
