// pattern 11
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  char i = 'A';
  while ((i-'A') < n) {
    int j = 1;
    while (j <= n) {
      cout << i;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
