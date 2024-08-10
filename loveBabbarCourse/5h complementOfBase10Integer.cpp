// Complement of base 10 integer
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int temp = n;
  int mask = 0;
  while (temp) {
    temp = temp >> 1;
    mask = mask << 1;
    mask = mask | 1;
  }
  int ans = (~n) & mask;
  cout << ans;
  return 0;
}
