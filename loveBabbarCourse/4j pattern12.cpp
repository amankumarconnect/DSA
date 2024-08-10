// pattern 12
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  char i = 1;
  while (i <= n) {
    char j = 'A';
    while ((j-'A') < n) {
      cout << j;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
