// pattern 18
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int i = 0;
  while (i < n) {
    int j = 'D'-i;
    while (j <= 'D') {
      cout<<char(j);
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
