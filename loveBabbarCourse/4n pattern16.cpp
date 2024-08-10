// pattern 16
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int i = 0;
  char p = 'A';
  while (i < n) {
    int j = 0;
    while (j <= i) {
      cout<< p;
      j++;
      p++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
