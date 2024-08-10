// pattern 15
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int i = 0;
  while (i < n) {
    int j = 0;
    while (j <= i) {
      cout<< char('A'+i);
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
