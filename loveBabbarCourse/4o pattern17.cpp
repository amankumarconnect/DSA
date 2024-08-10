// pattern 17
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int i = 0;
  while (i < n) {
    int j = 0;
    char p = 'A'+i;
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
