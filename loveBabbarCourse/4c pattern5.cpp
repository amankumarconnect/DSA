// pattern 5
#include <iostream>
#include<cmath>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  int i = 1;
  int p = (pow(n,2));
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      cout << p;
      j++;
      p--;
    }
    cout << endl;
    i++;
  }
  return 0;
}
